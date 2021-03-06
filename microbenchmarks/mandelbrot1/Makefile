# These three variables should be passed by users
# CXX={gcc, icc, clang)
# ISA={scalar, avx, avx2, core_avx512, mic_avx512, imci, arm}
# BUILD={debug, release, release_O3}
# {FORCE_OPENMP_PLUGIN=ON | FORCE_SCALAR_PLUGIN=ON}

CXXFLAGS=-std=c++11 -Wall

#some predefined rules
ifeq ($(CXX), g++)
	COMPILER_PREFIX=gcc
endif
ifeq ($(CXX), clang++)
	COMPILER_PREFIX=clang
endif
ifeq ($(CXX), icc)
	COMPILER_PREFIX=icc
endif

#select proper build flags
ifeq ($(BUILD), debug)
	#for intel compiler use precise results generation
	ifeq ($(CXX), icc)
		CXXFLAGS+=-fp-model=precise -qopt-streaming-stores=never
	endif
  
	CXXFLAGS+=-O0 -fno-inline
	BUILD_PREFIX=_O0
endif
ifeq ($(BUILD), release)
	#for intel compiler use precise results generation
	ifeq ($(CXX), icc)
		CXXFLAGS+=-fp-model=precise -qopt-streaming-stores=never
	endif

	CXXFLAGS+=-O2
	BUILD_PREFIX=_O2
endif
ifeq ($(BUILD), release_o3)
	CXXFLAGS+=-O3
	BUILD_PREFIX=_O3
	ifeq ($(CXX), icc)
		CXXFLAGS+=-qopt-streaming-stores=never
	endif
endif

ifeq ($(FORCE_OPENMP_PLUGIN), ON)
	ifeq ($(CXX), icc)
		CXXFLAGS+=-fopenmp
        else
		CXXFLAGS+=-openmp
	endif
	CXXFLAGS+=-DFORCE_OPENMP
	FORCE_PREFIX=_openmp_plugin
endif

ifeq ($(FORCE_SCALAR_PLUGIN), ON)
	CXXFLAGS+=-DFORCE_SCALAR
	FORCE_PREFIX=_scalar_plugin
endif

# Select proper instruction set flags
ifeq ($(ISA), scalar)
	ifeq ($(CXX), icc)
		CXXFLAGS+=-no-vec
	endif
	ISA_PREFIX+=_scalar
endif
ifeq ($(ISA), avx)
	CXXFLAGS+=-mavx
	ISA_PREFIX+=_avx
endif
ifeq ($(ISA), avx2)
	ifeq ($(CXX), icc)
		CXXFLAGS+=-xCORE-AVX2
	else
		CXXFLAGS+=-mavx2
	endif
	ISA_PREFIX+=_avx2
endif
ifeq ($(ISA), core_avx512)
	ifeq ($(CXX), icc)
		CXXFLAGS+=-xCORE-AVX512
	else
	
	endif
	ISA_PREFIX+=_core_avx512
endif
ifeq ($(ISA), mic_avx512) 
	ifeq ($(CXX), icc)
		CXXFLAGS+=-xMIC-AVX512
	else
	
	endif
	ISA_PREFIX+=_mic_avx512
endif
ifeq ($(ISA), imci)
	CXXFLAGS+=-mmic
	ISA_PREFIX+=_imci
endif
ifeq ($(ISA), arm)
	ISA_PREFIX+=_arm
endif

OUT_NAME=$(join $(join $(join $(join $(COMPILER_PREFIX), $(ISA_PREFIX)), $(BUILD_PREFIX)), $(FORCE_PREFIX)), .out)

#all: executable

all:
	$(MAKE) clean
	$(MAKE) executable

ifndef CXX
  $(error CXX is not set)
endif
ifndef BUILD
	$(error BUILD is not set)
endif
ifndef ISA
	$(error ISA is not set)
endif

executable:
	$(CXX) $(CXXFLAGS) *.cpp ../utilities/UMEBitmap.cpp -o $(OUT_NAME)

clean:
	rm -f *.out *.bmp
