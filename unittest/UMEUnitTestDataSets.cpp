// The MIT License (MIT)
//
// Copyright (c) 2015 CERN
//
// Author: Przemyslaw Karpinski
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//
// This piece of code was developed as part of ICE-DIP project at CERN.
//  "ICE-DIP is a European Industrial Doctorate project funded by the European Community's 
//  7th Framework programme Marie Curie Actions under grant PITN-GA-2012-316596".
//

#include "UMEUnitTestDataSets.h"

#include <limits>

// Below are pre-computed values for unit-tests.
// inputA, inputB, inputC, scalar and mask are used as inputs.
// Other arrays are used as model values used in comparison

const bool DataSet_1_mask::inputs::maskA[128] = {
    false,  true,   false,  false,  true,   false,  false,  false,
    false,  true,   true,   false,  true,   true,   false,  false,
    true,   true,   true,   false,  true,   false,  false,  false,
    true,   false,  true,   false,  true,   true,   true,   true,
    false,  false,  false,  false,  false,  false,  true,   false,
    true,   false,  false,  false,  true,   true,   true,   true,
    false,  false,  false,  true,   true,   false,  false,  true,
    true,   true,   true,   true,   false,  false,  false,  false,
    false,  false,  true,   false,  false,  false,  false,  false,
    true,   false,  true,   true,   true,   false,  false,  false,
    true,   false,  false,  true,   true,   false,  false,  false,
    false,  false,  true,   false,  true,   true,   false,  true,
    true,   true,   true,   true,   false,  false,  true,   true,
    false,  false,  true,   false,  true,   false,  true,   false,
    false,  true,   true,   true,   false,  true,   true,   false,
    false,  true,   false,  false,  false,  true,   true,   true
};

const bool DataSet_1_mask::inputs::maskB[128] = {
    true,   true,   true,   false,  true,   true,   false,  false,
    false,  false,  true,   false,  true,   false,  true,   true,
    true,   true,   false,  false,  true,   false,  true,   true,
    false,  true,   true,   true,   true,   true,   true,   true,
    true,   true,   false,  true,   false,  true,   true,   true,
    false,  false,  false,  true,   true,   false,  false,  true,
    true,   true,   true,   false,  true,   false,  true,   true,
    false,  false,  true,   false,  false,  false,  true,   false,
    false,  false,  true,   false,  false,  false,  false,  true,
    false,  true,   true,   false,  true,   true,   false,  true,
    false,  false,  true,   false,  false,  true,   false,  false,
    false,  true,   true,   false,  false,  true,   true,   true,
    false,  true,   false,  true,   false,  false,  true,   true,
    false,  false,  false,  false,  false,  true,   true,   true,
    false,  true,   false,  true,   true,   true,   true,   false,
    true,   false,  false,  false,  false,  false,  true,   false
};

const bool DataSet_1_mask::outputs::LAND[128] = {
    false,  true,   false,  false,  true,   false,  false,  false,
    false,  false,  true,   false,  true,   false,  false,  false,
    true,   true,   false,  false,  true,   false,  false,  false,
    false,  false,  true,   false,  true,   true,   true,   true,
    false,  false,  false,  false,  false,  false,  true,   false,
    false,  false,  false,  false,  true,   false,  false,  true,
    false,  false,  false,  false,  true,   false,  false,  true,
    false,  false,  true,   false,  false,  false,  false,  false,
    false,  false,  true,   false,  false,  false,  false,  false,
    false,  false,  true,   false,  true,   false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  true,   false,  false,  true,   false,  true,
    false,  true,   false,  true,   false,  false,  true,   true,
    false,  false,  false,  false,  false,  false,  true,   false,
    false,  true,   false,  true,   false,  true,   true,   false,
    false,  false,  false,  false,  false,  false,  true,   false
};

const bool DataSet_1_mask::outputs::LOR[128] = {
    true,   true,   true,   false,  true,   true,   false,  false,
    false,  true,   true,   false,  true,   true,   true,   true,
    true,   true,   true,   false,  true,   false,  true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   false,  true,   false,  true,   true,   true,
    true,   false,  false,  true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   false,  true,   true,
    true,   true,   true,   true,   false,  false,  true,   false,
    false,  false,  true,   false,  false,  false,  false,  true,
    true,   true,   true,   true,   true,   true,   false,  true,
    true,   false,  true,   true,   true,   true,   false,  false,
    false,  true,   true,   false,  true,   true,   true,   true,
    true,   true,   true,   true,   false,  false,  true,   true,
    false,  false,  true,   false,  true,   true,   true,   true,
    false,  true,   true,   true,   true,   true,   true,   false,
    true,   true,   false,  false,  false,  true,   true,   true
};
const bool DataSet_1_mask::outputs::LXOR[128] = {
    true,   false,  true,   false,  false,  true,   false,  false,
    false,  true,   false,  false,  false,  true,   true,   true,
    false,  false,  true,   false,  false,  false,  true,   true,
    true,   true,   false,  true,   false,  false,  false,  false,
    true,   true,   false,  true,   false,  true,   false,  true,
    true,   false,  false,  true,   false,  true,   true,   false,
    true,   true,   true,   true,   false,  false,  true,   false,
    true,   true,   false,  true,   false,  false,  true,   false,
    false,  false,  false,  false,  false,  false,  false,  true,
    true,   true,   false,  true,   false,  true,   false,  true,
    true,   false,  true,   true,   true,   true,   false,  false,
    false,  true,   false,  false,  true,   false,  true,   false,
    true,   false,  true,   false,  false,  false,  false,  false,
    false,  false,  true,   false,  true,   true,   false,  true,
    false,  false,  true,   false,  true,   false,  false,  false,
    true,   true,   false,  false,  false,  true,   false,  true
};
const bool DataSet_1_mask::outputs::LNOT[128] = {
    true,   false,  true,   true,   false,  true,   true,   true,
    true,   false,  false,  true,   false,  false,  true,   true,
    false,  false,  false,  true,   false,  true,   true,   true,
    false,  true,   false,  true,   false,  false,  false,  false,
    true,   true,   true,   true,   true,   true,   false,  true,
    false,  true,   true,   true,   false,  false,  false,  false,
    true,   true,   true,   false,  false,  true,   true,   false,
    false,  false,  false,  false,  true,   true,   true,   true,
    true,   true,   false,  true,   true,   true,   true,   true,
    false,  true,   false,  false,  false,  true,   true,   true,
    false,  true,   true,   false,  false,  true,   true,   true,
    true,   true,   false,  true,   false,  false,  true,   false,
    false,  false,  false,  false,  true,   true,   false,  false,
    true,   true,   false,  true,   false,  true,   false,  true,
    true,   false,  false,  false,  true,   false,  false,  true,
    true,   false,  true,   true,   true,   false,  false,  false
};
const bool DataSet_1_mask::outputs::HLAND[128] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};
const bool DataSet_1_mask::outputs::HLOR[128] = {
    false,  true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};
const bool DataSet_1_mask::outputs::HLXOR[128] = {
    false,  true,   true,   true,   false,  false,  false,  false,
    false,  true,   false,  false,  true,   false,  false,  false,
    true,   false,  true,   true,   false,  false,  false,  false,
    true,   true,   false,  false,  true,   false,  true,   false,
    false,  false,  false,  false,  false,  false,  true,   true,
    false,  false,  false,  false,  true,   false,  true,   false,
    false,  false,  false,  true,   false,  false,  false,  true,
    false,  true,   false,  true,   true,   true,   true,   true,
    true,   true,   false,  false,  false,  false,  false,  false,
    true,   true,   false,  true,   false,  false,  false,  false,
    true,   true,   true,   false,  true,   true,   true,   true,
    true,   true,   false,  false,  true,   false,  false,  true,
    false,  true,   false,  true,   true,   true,   false,  true,
    true,   true,   false,  false,  true,   true,   false,  false,
    false,  true,   false,  true,   true,   false,  true,   true,
    true,   false,  false,  false,  false,  true,   false,  true
};

const uint32_t DataSet_1_32u::inputs::inputA[32] = {
    2890127753, 3623131505, 3730078463, 2142934923,
    3878122330, 4195248000, 1453286364, 1634157816,
    587950636,  3299964697, 1823632563, 3120724469,
    1568573771, 3435400464, 703518081,  817188400,
    3165700845, 27010288,   3087364633, 431601683,
    4030944788, 1853857795, 2691787100, 868104033,
    3265031366, 2189542274, 180288151,  2452030208,
    2748106285, 4225759456, 4035989014, 446256628
};

const uint32_t DataSet_1_32u::inputs::inputB[32] = {
    15667904,   794793862,  147627889,  2249388176, 
    1586257963, 3765622899, 4226445805, 469642333,
    2084138484, 157623475,  4146090199, 2263217432,
    2261116474, 289745607,  2743838183, 2028729679,
    2086680194, 444702103,  3207991232, 460691727,
    3667110195, 2667605829, 2649569023, 189568803,
    2603418874, 1317779160, 2953755803, 3129831066,
    1022843651, 904356825,  2189632558, 1398010737
};

const uint32_t DataSet_1_32u::inputs::inputC[32] = {
    1689902809, 2348736796, 3292230136, 1569671280,
    777549897,  2869579483, 1789754979, 1767019178,
    3643171494, 2291920162, 796845760,  1526756488,
    3027058465, 3350141993, 2620505403, 1857313343,
    709637021,  3115471696, 4281729486, 1711164905,
    1594329641, 2546652425, 1922139181, 587383476,
    2317880783, 2983673643, 2020558581, 2365802563,
    3332725190, 2891378317, 3720270723, 3845563885
};
const uint32_t DataSet_1_32u::inputs::scalarA = 636364;

const bool DataSet_1_32u::inputs::maskA[32] = {
    false,   false,  false,  true,   // 4
    false,  true,   true,   false,  // 8

    false,  true,   true,   false,  
    true,   false,  false,  true,   // 16
    
    false,  true,   true,   false,
    true,   false,  false,  true,
    true,   false,  false,  true,
    false,  true,   true,   false,  // 32
};

const uint32_t DataSet_1_32u::outputs::ADDV[32] = {
    2905795657, 122958071,  3877706352, 97355803,
    1169412997, 3665903603, 1384764873, 2103800149,
    2672089120, 3457588172, 1674755466, 1088974605,
    3829690245, 3725146071, 3447356264, 2845918079,
    957413743,  471712391,  2000388569, 892293410,
    3403087687, 226496328,  1046388827, 1057672836,
    1573482944, 3507321434, 3134043954, 1286893978,
    3770949936, 835148985,  1930654276, 1844267365
};

const uint32_t DataSet_1_32u::outputs::MADDV[32] = {
    2890127753, 3623131505, 3730078463, 97355803,
    3878122330, 3665903603, 1384764873, 1634157816,
    587950636,  3457588172, 1674755466, 3120724469,
    3829690245, 3435400464, 703518081,  2845918079,
    3165700845, 471712391,  2000388569, 431601683,
    3403087687, 1853857795, 2691787100, 1057672836,
    1573482944, 2189542274, 180288151,  1286893978,
    2748106285, 835148985,  1930654276, 446256628
};

const uint32_t DataSet_1_32u::outputs::ADDS[32] = {
    2890764117, 3623767869, 3730714827, 2143571287,
    3878758694, 4195884364, 1453922728, 1634794180,
    588587000,  3300601061, 1824268927, 3121360833,
    1569210135, 3436036828, 704154445,  817824764,
    3166337209, 27646652,   3088000997, 432238047,
    4031581152, 1854494159, 2692423464, 868740397,
    3265667730, 2190178638, 180924515,  2452666572,
    2748742649, 4226395820, 4036625378, 446892992
};

const uint32_t DataSet_1_32u::outputs::MADDS[32] = {
    2890127753, 3623131505, 3730078463, 2143571287,
    3878122330, 4195884364, 1453922728, 1634157816,
    587950636,  3300601061, 1824268927, 3120724469,
    1569210135, 3435400464, 703518081,  817824764,
    3165700845, 27646652,   3088000997, 431601683,
    4031581152, 1853857795, 2691787100, 868740397,
    3265667730, 2189542274, 180288151,  2452666572,
    2748106285, 4226395820, 4036625378, 446256628
};

const uint32_t DataSet_1_32u::outputs::POSTPREFINC[32] = {
    2890127754, 3623131506, 3730078464, 2142934924,
    3878122331, 4195248001, 1453286365, 1634157817,
    587950637,  3299964698, 1823632564, 3120724470,
    1568573772, 3435400465, 703518082,  817188401,
    3165700846, 27010289,   3087364634, 431601684,
    4030944789, 1853857796, 2691787101, 868104034,
    3265031367, 2189542275, 180288152,  2452030209,
    2748106286, 4225759457, 4035989015, 446256629
};

const uint32_t DataSet_1_32u::outputs::MPOSTPREFINC[32] = {
    2890127753, 3623131505, 3730078463, 2142934924,
    3878122330, 4195248001, 1453286365, 1634157816,
    587950636,  3299964698, 1823632564, 3120724469,
    1568573772, 3435400464, 703518081,  817188401,
    3165700845, 27010289,   3087364634, 431601683,
    4030944789, 1853857795, 2691787100, 868104034,
    3265031367, 2189542274, 180288151,  2452030209,
    2748106285, 4225759457, 4035989015, 446256628
};

const uint32_t DataSet_1_32u::outputs::SUBV[32] = {
    2874459849, 2828337643, 3582450574, 4188514043,
    2291864367, 429625101,  1521807855, 1164515483,
    2798779448, 3142341222, 1972509660, 857507037,
    3602424593, 3145654857, 2254647194, 3083426017,
    1079020651, 3877275481, 4174340697, 4265877252,
    363834593,  3481219262, 42218077,   678535230,
    661612492,  871763114,  1521499644, 3617166438,
    1725262634, 3321402631, 1846356456, 3343213187
};

const uint32_t DataSet_1_32u::outputs::MSUBV[32] = {
    2890127753, 3623131505, 3730078463, 4188514043,
    3878122330, 429625101,  1521807855, 1634157816,
    587950636,  3142341222, 1972509660, 3120724469,
    3602424593, 3435400464, 703518081,  3083426017,
    3165700845, 3877275481, 4174340697, 431601683,
    363834593,  1853857795, 2691787100, 678535230,
    661612492,  2189542274, 180288151,  3617166438,
    2748106285, 3321402631, 1846356456, 446256628
};

const uint32_t DataSet_1_32u::outputs::SUBS[32] = {
    2889491389, 3622495141, 3729442099, 2142298559,
    3877485966, 4194611636, 1452650000, 1633521452,
    587314272,  3299328333, 1822996199, 3120088105,
    1567937407, 3434764100, 702881717,  816552036,
    3165064481, 26373924,   3086728269, 430965319,
    4030308424, 1853221431, 2691150736, 867467669,
    3264395002, 2188905910, 179651787,  2451393844,
    2747469921, 4225123092, 4035352650, 445620264
};

const uint32_t DataSet_1_32u::outputs::MSUBS[32] = {
    2890127753, 3623131505, 3730078463, 2142298559,
    3878122330, 4194611636, 1452650000, 1634157816,
    587950636,  3299328333, 1822996199, 3120724469,
    1567937407, 3435400464, 703518081,  816552036,
    3165700845, 26373924,   3086728269, 431601683,
    4030308424, 1853857795, 2691787100, 867467669,
    3264395002, 2189542274, 180288151,  2451393844,
    2748106285, 4225123092, 4035352650, 446256628
};

const uint32_t DataSet_1_32u::outputs::SUBFROMV[32] = {
    1420507447, 1466629653, 712516722,  106453253,
    2003102929, 3865342195, 2773159441, 3130451813,
    1496187848, 1152626074, 2322457636, 3437460259,
    692542703,  1149312439, 2040320102, 1211541279,
    3215946645, 417691815,  120626599,  29090044,
    3931132703, 813748034,  4252749219, 3616432066,
    3633354804, 3423204182, 2773467652, 677800858,
    2569704662, 973564665,  2448610840, 951754109
};

const uint32_t DataSet_1_32u::outputs::MSUBFROMV[32] = {
    15667904,   794793862,  147627889,  106453253,
    1586257963, 3865342195, 2773159441, 469642333,
    2084138484, 1152626074, 2322457636, 2263217432,
    692542703,  289745607,  2743838183, 1211541279,
    2086680194, 417691815,  120626599,  460691727,
    3931132703, 2667605829, 2649569023, 3616432066,
    3633354804, 1317779160, 2953755803, 677800858,
    1022843651, 973564665,  2448610840, 1398010737
};

const uint32_t DataSet_1_32u::outputs::SUBFROMS[32] = {
    1405475907, 672472155,  565525197,  2152668737,
    417481330,  100355660,  2842317296, 2661445844,
    3707653024, 995638963,  2471971097, 1174879191,
    2727029889, 860203196,  3592085579, 3478415260,
    1129902815, 4268593372, 1208239027, 3864001977,
    264658872,  2441745865, 1603816560, 3427499627,
    1030572294, 2106061386, 4115315509, 1843573452,
    1547497375, 69844204,   259614646,  3849347032
};

const uint32_t DataSet_1_32u::outputs::MSUBFROMS[32] = {
    636364,     636364,     636364,     2152668737,
    636364,     100355660,  2842317296, 636364,
    636364,     995638963,  2471971097, 636364,
    2727029889, 636364,     636364,     3478415260,
    636364,     4268593372, 1208239027, 636364,
    264658872,  636364,     636364,     3427499627,
    1030572294, 636364,     636364,     1843573452,
    636364,     69844204,   259614646,  636364
};

const uint32_t DataSet_1_32u::outputs::POSTPREFDEC[32] = {
    2890127752, 3623131504, 3730078462, 2142934922,
    3878122329, 4195247999, 1453286363, 1634157815,
    587950635,  3299964696, 1823632562, 3120724468,
    1568573770, 3435400463, 703518080,  817188399,
    3165700844, 27010287,   3087364632, 431601682,
    4030944787, 1853857794, 2691787099, 868104032,
    3265031365, 2189542273, 180288150,  2452030207,
    2748106284, 4225759455, 4035989013, 446256627
};

const uint32_t DataSet_1_32u::outputs::MPOSTPREFDEC[32] = {
    2890127753, 3623131505, 3730078463, 2142934922,
    3878122330, 4195247999, 1453286363, 1634157816,
    587950636,  3299964696, 1823632562, 3120724469,
    1568573770, 3435400464, 703518081,  817188399,
    3165700845, 27010287,   3087364632, 431601683,
    4030944787, 1853857795, 2691787100, 868104032,
    3265031365, 2189542274, 180288151,  2452030207,
    2748106285, 4225759455, 4035989013, 446256628
};

const uint32_t DataSet_1_32u::outputs::MULV[32] = { 
    253085888,  7927846,    2531437455, 818777648,  
    3222937630, 2462875264, 2277215916, 3094261272,  
    920776176,  1521666683, 1462843989, 622585848,
    3334175998, 3956983664, 3593063527, 3520532688,  
    4290837082, 2997942672, 235604416,  2727617565, 
    3334035964, 4224150991, 3009239716, 3782723907,  
    2135118172, 571564464,  1173003629, 1438764544,  
    2000900487, 272143840,  2787844084, 1147243700
};

const uint32_t DataSet_1_32u::outputs::MMULV[32] = {
    2890127753, 3623131505, 3730078463, 818777648,
    3878122330, 2462875264, 2277215916, 1634157816,
    587950636,  1521666683, 1462843989, 3120724469,
    3334175998, 3435400464, 703518081,  3520532688,
    3165700845, 2997942672, 235604416,  431601683,
    3334035964, 1853857795, 2691787100, 3782723907,
    2135118172, 2189542274, 180288151,  1438764544,
    2748106285, 272143840,  2787844084, 446256628
};

const uint32_t DataSet_1_32u::outputs::MULS[32] = {
    3836753452, 1818241804, 960450100,  163121604,
    640191928,  371718656,  995762000,  247877024,
    3132471056, 1719702764, 2538876324, 1137731644,
    3414847172, 1057405120, 3369031628, 3228712512,
    822207964,  4210761536, 2162399468, 1204756004,
    406371312,  3924861284, 3189375312, 2871309900,
    2156178376, 2654254488, 1722512212, 657810432,
    1189133532, 3511726720, 2029635464, 2710176368
};

const uint32_t DataSet_1_32u::outputs::MMULS[32] = {
    2890127753, 3623131505, 3730078463, 163121604,
    3878122330, 371718656,  995762000,  1634157816,
    587950636,  1719702764, 2538876324, 3120724469,
    3414847172, 3435400464, 703518081,  3228712512,
    3165700845, 4210761536, 2162399468, 431601683,
    406371312,  1853857795, 2691787100, 2871309900,
    2156178376, 2189542274, 180288151,  657810432,
    2748106285, 3511726720, 2029635464, 446256628
};

const uint32_t DataSet_1_32u::outputs::DIVV[32] = {
    184,    4,  25, 0,
    2,      1,  0,  3,
    0,      20, 0,  1,
    0,      11, 0,  0,
    1,      0,  0,  0,
    1,      0,  1,  4,
    1,      1,  0,  0,
    2,      4,  1,  0
};

const uint32_t DataSet_1_32u::outputs::MDIVV[32] = {
    2890127753, 3623131505, 3730078463, 0,
    3878122330, 1,          0,          1634157816,
    587950636,  20,         0,          3120724469,
    0,          3435400464, 703518081,  0,
    3165700845, 0,          0,          431601683,
    1,          1853857795, 2691787100, 4,
    1,          2189542274, 180288151,  0,
    2748106285, 4,          1,          446256628
};

const uint32_t DataSet_1_32u::outputs::DIVS[32] = {
    4541,   5693,   5861,   3367,
    6094,   6592,   2283,   2567,
    923,    5185,   2865,   4903,
    2464,   5398,   1105,   1284,
    4974,   42,     4851,   678,
    6334,   2913,   4229,   1364,
    5130,   3440,   283,    3853,
    4318,   6640,   6342,   701
};

const uint32_t DataSet_1_32u::outputs::MDIVS[32] = {
    2890127753, 3623131505, 3730078463, 3367,
    3878122330, 6592,       2283,       1634157816,
    587950636,  5185,       2865,       3120724469,
    2464,       3435400464, 703518081,  1284,
    3165700845, 42,         4851,       431601683,
    6334,       1853857795, 2691787100, 1364,
    5130,       2189542274, 180288151,  3853,
    2748106285, 6640,       6342,       446256628
};

const uint32_t DataSet_1_32u::outputs::RCP[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::MRCP[32] = {
    2890127753, 3623131505, 3730078463, 0,
    3878122330, 0,          0,          1634157816,
    587950636,  0,          0,          3120724469,
    0,          3435400464, 703518081,  0,
    3165700845, 0,          0,          431601683,
    0,          1853857795, 2691787100, 0,
    0,          2189542274, 180288151,  0,
    2748106285, 0,          0,          446256628
};

const uint32_t DataSet_1_32u::outputs::RCPS[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::MRCPS[32] = {
    2890127753, 3623131505, 3730078463, 0,
    3878122330, 0,          0,          1634157816,
    587950636,  0,          0,          3120724469,
    0,          3435400464, 703518081,  0,
    3165700845, 0,          0,          431601683,
    0,          1853857795, 2691787100, 0,
    0,          2189542274, 180288151,  0,
    2748106285, 0,          0,          446256628
};

const bool DataSet_1_32u::outputs::CMPEQV[32] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};

const bool DataSet_1_32u::outputs::CMPEQS[32] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};

const bool DataSet_1_32u::outputs::CMPNEV[32] = {
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};

const bool DataSet_1_32u::outputs::CMPNES[32] = {
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};

const bool DataSet_1_32u::outputs::CMPGTV[32] = {
    true,   true,   true,   false,  true,   true,   false,  true,
    false,  true,   false,  true,   false,  true,   false,  false,
    true,   false,  false,  false,  true,   false,  true,   true,
    true,   true,   false,  false,  true,   true,   true,   false
};

const bool DataSet_1_32u::outputs::CMPGTS[32] = {
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};

const bool DataSet_1_32u::outputs::CMPLTV[32] = {
    false,  false,  false,  true,   false,  false,  true,   false,
    true,   false,  true,   false,  true,   false,  true,   true,
    false,  true,   true,   true,   false,  true,   false,  false,
    false,  false,  true,   true,   false,  false,  false,  true
};

const bool DataSet_1_32u::outputs::CMPLTS[32] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};

const bool DataSet_1_32u::outputs::CMPGEV[32] = {
    true,   true,   true,   false,  true,   true,   false,  true,
    false,  true,   false,  true,   false,  true,   false,  false,
    true,   false,  false,  false,  true,   false,  true,   true,
    true,   true,   false,  false,  true,   true,   true,   false
};

const bool DataSet_1_32u::outputs::CMPGES[32] = {
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};

const bool DataSet_1_32u::outputs::CMPLEV[32] = {
    false,  false,  false,  true,   false,  false,  true,   false,
    true,   false,  true,   false,  true,   false,  true,   true,
    false,  true,   true,   true,   false,  true,   false,  false,
    false,  false,  true,   true,   false,  false,  false,  true
};

const bool DataSet_1_32u::outputs::CMPLES[32] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};

const bool DataSet_1_32u::outputs::CMPEV = false;
const bool DataSet_1_32u::outputs::CMPES = false;

const uint32_t DataSet_1_32u::outputs::HADD[32] = {
    2890127753, 2218291962, 1653403129, 3796338052,
    3379493086, 3279773790, 438092858,  2072250674,
    2660201310, 1665198711, 3488831274, 2314588447,
    3883162218, 3023595386, 3727113467, 249334571,
    3415035416, 3442045704, 2234443041, 2666044724,
    2402022216, 4255880011, 2652699815, 3520803848,
    2490867918, 385442896,  565731047,  3017761255,
    1470900244, 1401692404, 1142714122, 1588970750
};

const uint32_t DataSet_1_32u::outputs::MHADD[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::HMUL[32] = {
    2890127753, 4236896256, 3538304135, 1137475149,
    1801190930, 708069120,  2506228736, 1543757824,
    191528960,  518422528,  3643506688, 1713471488,
    3645931520, 2877816832, 2542272512, 3649044480,
    1535115264, 3355443200, 134217728,  2550136832,
    3758096384, 2684354560, 0,          0,
    0,          0,          0,          0,
    0,          0,          0,          0
};

const uint32_t DataSet_1_32u::outputs::MHMUL[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::BANDV[32] = {
    4395136,    122982656,  138680945,  101879936,
    1174691850, 3758243840, 1384800716, 23463000,
    537487396,  2171921,    1679835283, 2181067024,
    71598090,   4458496,    562726273,  815875072,
    1008730752, 8389776,    3087270400, 422680579,
    3489857552, 234889217,  2153848924, 51124001,
    2181825730, 42041984,   964755,     2449801728,
    549732865,  835150016,  2155873286, 303124848
};

const uint32_t DataSet_1_32u::outputs::MBANDV[32] = {
    2890127753, 3623131505, 3730078463, 101879936,
    3878122330, 3758243840, 1384800716, 1634157816,
    587950636,  2171921,    1679835283, 3120724469,
    71598090,   3435400464, 703518081,  815875072,
    3165700845, 8389776,    3087270400, 431601683,
    3489857552, 1853857795, 2691787100, 51124001,
    2181825730, 2189542274, 180288151,  2449801728,
    2748106285, 835150016,  2155873286, 446256628
};

const uint32_t DataSet_1_32u::outputs::BANDS[32] = {
    102792, 37184,  12492,  562568,
    78152,  533888, 598476, 66760,
    598028, 79112,  9344,   12740,
    557384, 1280,   562560, 66560,
    32972,  533696, 77832,  634880,
    70660,  630784, 74060,  537920,
    533700, 98688,  569476, 65792,
    558092, 635072, 1028,   595396
};

const uint32_t DataSet_1_32u::outputs::MBANDS[32] = {
    2890127753, 3623131505, 3730078463, 562568,
    3878122330, 533888,     598476,     1634157816,
    587950636,  79112,      9344,       3120724469,
    557384,     3435400464, 703518081,  66560,
    3165700845, 533696,     77832,      431601683,
    70660,      1853857795, 2691787100, 537920,
    533700,     2189542274, 180288151,  65792,
    2748106285, 635072,     1028,       446256628
};

const uint32_t DataSet_1_32u::outputs::BORV[32] = {
    2901400521, 4294942711, 3739025407, 4290443163,
    4289688443, 4202627059, 4294931453, 2080337149,
    2134601724, 3455416251, 4289887479, 3202874877,
    3758092155, 3720687575, 2884629991, 2030043007,
    4243650287, 463322615,  3208085465, 469612831,
    4208197431, 4286574407, 3187507199, 1006548835,
    3686624510, 3465279450, 3133079199, 3132059546,
    3221217071, 4294966265, 4069748286, 1541142517
};

const uint32_t DataSet_1_32u::outputs::MBORV[32] = {
    2890127753, 3623131505, 3730078463, 4290443163,
    3878122330, 4202627059, 4294931453, 1634157816,
    587950636,  3455416251, 4289887479, 3120724469,
    3758092155, 3435400464, 703518081,  2030043007,
    3165700845, 463322615,  3208085465, 431601683,
    4208197431, 1853857795, 2691787100, 1006548835,
    3686624510, 2189542274, 180288151,  3132059546,
    2748106285, 4294966265, 4069748286, 446256628
};

const uint32_t DataSet_1_32u::outputs::BORS[32] = {
    2890661325, 3623730685, 3730702335, 2143008719,
    3878680542, 4195350476, 1453324252, 1634727420,
    587988972,  3300521949, 1824259583, 3121348093,
    1568652751, 3436035548, 703591885,  817758204,
    3166304237, 27112956,   3087923165, 431603167,
    4031510492, 1853863375, 2692349404, 868202477,
    3265134030, 2190079950, 180355039,  2452600780,
    2748184557, 4225760748, 4036624350, 446297596
};

const uint32_t DataSet_1_32u::outputs::MBORS[32] = {
    2890127753, 3623131505, 3730078463, 2143008719,
    3878122330, 4195350476, 1453324252, 1634157816,
    587950636,  3300521949, 1824259583, 3120724469,
    1568652751, 3435400464, 703518081,  817758204,
    3165700845, 27112956,   3087923165, 431601683,
    4031510492, 1853857795, 2691787100, 868202477,
    3265134030, 2189542274, 180288151,  2452600780,
    2748106285, 4225760748, 4036624350, 446256628
};

const uint32_t DataSet_1_32u::outputs::BXORV[32] = {
    2897005385, 4171960055, 3600344462, 4188563227,
    3114996593, 444383219,  2910130737, 2056874149,
    1597114328, 3453244330, 2610052196, 1021807853,
    3686494065, 3716229079, 2321903718, 1214167935,
    3234919535, 454932839,  120815065,  46932252,
    718339879,  4051685190, 1033658275, 955424834,
    1504798780, 3423237466, 3132114444, 682257818,
    2671484206, 3459816249, 1913875000, 1238017669
};

const uint32_t DataSet_1_32u::outputs::MBXORV[32] = {
    2890127753, 3623131505, 3730078463, 4188563227,
    3878122330, 444383219,  2910130737, 1634157816,
    587950636,  3453244330, 2610052196, 3120724469,
    3686494065, 3435400464, 703518081,  1214167935,
    3165700845, 454932839,  120815065,  431601683,
    718339879,  1853857795, 2691787100, 955424834,
    1504798780, 2189542274, 180288151,  682257818,
    2748106285, 3459816249, 1913875000, 446256628
};

const uint32_t DataSet_1_32u::outputs::BXORS[32] = {
    2890558533, 3623693501, 3730689843, 2142446151,
    3878602390, 4194816588, 1452725776, 1634660660,
    587390944,  3300442837, 1824250239, 3121335353,
    1568095367, 3436034268, 703029325,  817691644,
    3166271265, 26579260,   3087845333, 430968287,
    4031439832, 1853232591, 2692275344, 867664557,
    3264600330, 2189981262, 179785563,  2452534988,
    2747626465, 4225125676, 4036623322, 445702200
};

const uint32_t DataSet_1_32u::outputs::MBXORS[32] = {
    2890127753, 3623131505, 3730078463, 2142446151,
    3878122330, 4194816588, 1452725776, 1634157816,
    587950636,  3300442837, 1824250239, 3120724469,
    1568095367, 3435400464, 703518081,  817691644,
    3165700845, 26579260,   3087845333, 431601683,
    4031439832, 1853857795, 2691787100, 867664557,
    3264600330, 2189542274, 180288151,  2452534988,
    2748106285, 4225125676, 4036623322, 446256628
};

const uint32_t DataSet_1_32u::outputs::BNOT[32] = {
    1404839542, 671835790,  564888832,  2152032372,
    416844965,  99719295,   2841680931, 2660809479,
    3707016659, 995002598,  2471334732, 1174242826,
    2726393524, 859566831,  3591449214, 3477778895,
    1129266450, 4267957007, 1207602662, 3863365612,
    264022507,  2441109500, 1603180195, 3426863262,
    1029935929, 2105425021, 4114679144, 1842937087,
    1546861010, 69207839,   258978281,  3848710667
};

const uint32_t DataSet_1_32u::outputs::MBNOT[32] = {
    2890127753, 3623131505, 3730078463, 2152032372,
    3878122330, 99719295,   2841680931, 1634157816,
    587950636,  995002598,  2471334732, 3120724469,
    2726393524, 3435400464, 703518081,  3477778895,
    3165700845, 4267957007, 1207602662, 431601683,
    264022507,  1853857795, 2691787100, 3426863262,
    1029935929, 2189542274, 180288151,  1842937087,
    2748106285, 69207839,   258978281,  446256628
};

const uint32_t DataSet_1_32u::outputs::HAND[32] = {
    2890127753, 2218825985, 2218792961, 67112961,
    67112960,   0,          0,          0,
    0,          0,          0,          0,
    0,          0,          0,          0,
    0,          0,          0,          0,
    0,          0,          0,          0,
    0,          0,          0,          0,
    0,          0,          0,          0
};

const uint32_t DataSet_1_32u::outputs::HOR[32] = {
    2890127753, 4294433273, 4294441983, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295,
    4294967295, 4294967295, 4294967295, 4294967295
};

const uint32_t DataSet_1_32u::outputs::MHOR[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::HXOR[32] = {
    2890127753, 2075607288, 2783132167, 3663310220,
    1031724758, 3346053462, 2448415370, 4035485298,
    3548640350, 389186375,  2072047604, 3246560769,
    2633768778, 1345851994, 2044119003, 1231260139,
    4124265222, 4098846710, 1279925743, 1442031100,
    2779837416, 3419362283, 1807628983, 1476398550,
    2593939728, 404595346,  312694789,  2156157701,
    591961384,  3633800648, 671558622,  849247786
};

const uint32_t DataSet_1_32u::outputs::MHXOR[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::FMULADDV[32] = {
    1942988697, 2356664642, 1528700295, 2388448928,
    4000487527, 1037487451, 4066970895, 566313154,
    268980374,  3813586845, 2259689749, 2149342336,
    2066267167, 3012158361, 1918601634, 1082878735,
    705506807,  1818447072, 222366606,  143815174,
    633398309,  2475836120, 636411601,  75140087,
    158031659,  3555238107, 3193562210, 3804567107,
    1038658381, 3163522157, 2213147511, 697840289
};

const uint32_t DataSet_1_32u::outputs::MFMULADD[32] = {
    2890127753, 3623131505, 3730078463, 2388448928,
    3878122330, 1037487451, 4066970895, 1634157816,
    587950636,  3813586845, 2259689749, 3120724469,
    2066267167, 3435400464, 703518081,  1082878735,
    3165700845, 1818447072, 222366606,  431601683,
    633398309,  1853857795, 2691787100, 75140087,
    158031659,  2189542274, 180288151,  3804567107,
    2748106285, 3163522157, 2213147511, 446256628
};

const uint32_t DataSet_1_32u::outputs::FMULSUBV[32] = {
    2858150375, 1954158346, 3534174615, 3544073664,
    2445387733, 3888263077, 487460937,  1327242094,
    1572571978, 3524713817, 665998229,  3390796656,
    307117533,  606841671,  972558124,  1663219345,
    3581200061, 4177438272, 248842226,  1016452660,
    1739706323, 1677498566, 1087100535, 3195340431,
    4112204685, 1882858117, 3447412344, 3367929277,
    2963142593, 1675732819, 3362540657, 1596647111
};

const uint32_t DataSet_1_32u::outputs::MFMULSUBV[32] = {
    2890127753, 3623131505, 3730078463, 3544073664,
    3878122330, 3888263077, 487460937,  1634157816,
    587950636,  3524713817, 665998229,  3120724469,
    307117533,  3435400464, 703518081,  1663219345,
    3165700845, 4177438272, 248842226,  431601683,
    1739706323, 1853857795, 2691787100, 3195340431,
    4112204685, 2189542274, 180288151,  3367929277,
    2748106285, 1675732819, 3362540657, 446256628
};

const uint32_t DataSet_1_32u::outputs::FADDMULV[32] = {
    1037211617, 2119201284, 1552747648, 776479696,
    3341134061, 512474849,  1968937659, 1245297778,
    3592447168, 29396248,   3561235328, 1825366760,
    1139088165, 3733878127, 3342743800, 2008433217,
    2752386579, 1077710640, 3089782174, 2368999922,
    3053201503, 2366075272, 450632703,  757152976,
    1453963840, 1777709854, 3852861146, 4193979214,
    2334874400, 891817957,  1822000332, 2303265665
};

const uint32_t DataSet_1_32u::outputs::MFADDMULV[32] = {
    2890127753, 3623131505, 3730078463, 776479696,
    3878122330, 512474849,  1968937659, 1634157816,
    587950636,  29396248,   3561235328, 3120724469,
    1139088165, 3435400464, 703518081,  2008433217,
    3165700845, 1077710640, 3089782174, 431601683,
    3053201503, 1853857795, 2691787100, 757152976,
    1453963840, 2189542274, 180288151,  4193979214,
    2748106285, 891817957,  1822000332, 446256628
};

const uint32_t DataSet_1_32u::outputs::FSUBMULV[32] = {
    3934244449, 3878011060, 624975760,  3582240208,
    2942206055, 2469090847, 2542809453, 2088287470,
    1996946512, 2620219276, 2363788544, 2723854696,
    2150315057, 1459173809, 662350462,  805304671,
    3139661471, 1057892048, 1812561054, 1129082532,
    1702558217, 2800929966, 2346831449, 1171236760,
    3141159412, 1949824654, 4225907244, 2317387442,
    1231322236, 3905984219, 2356586936, 710713927
};

const uint32_t DataSet_1_32u::outputs::MFSUBMULV[32] = {
    2890127753, 3623131505, 3730078463, 3582240208,
    3878122330, 2469090847, 2542809453, 1634157816,
    587950636,  2620219276, 2363788544, 3120724469,
    2150315057, 3435400464, 703518081,  805304671,
    3165700845, 1057892048, 1812561054, 431601683,
    1702558217, 1853857795, 2691787100, 1171236760,
    3141159412, 2189542274, 180288151,  2317387442,
    2748106285, 3905984219, 2356586936, 446256628
};

const uint32_t DataSet_1_32u::outputs::MAXV[32] = {
    2890127753, 3623131505, 3730078463, 2249388176,
    3878122330, 4195248000, 4226445805, 1634157816,
    2084138484, 3299964697, 4146090199, 3120724469,
    2261116474, 3435400464, 2743838183, 2028729679,
    3165700845, 444702103,  3207991232, 460691727,
    4030944788, 2667605829, 2691787100, 868104033,
    3265031366, 2189542274, 2953755803, 3129831066,
    2748106285, 4225759456, 4035989014, 1398010737
};

const uint32_t DataSet_1_32u::outputs::MMAXV[32] = {
    2890127753, 3623131505, 3730078463, 2249388176,
    3878122330, 4195248000, 4226445805, 1634157816,
    587950636,  3299964697, 4146090199, 3120724469,
    2261116474, 3435400464, 703518081,  2028729679,
    3165700845, 444702103,  3207991232, 431601683,
    4030944788, 1853857795, 2691787100, 868104033,
    3265031366, 2189542274, 180288151,  3129831066,
    2748106285, 4225759456, 4035989014, 446256628
};

const uint32_t DataSet_1_32u::outputs::MAXS[32] = {
    2890127753, 3623131505, 3730078463, 2142934923,
    3878122330, 4195248000, 1453286364, 1634157816,
    587950636,  3299964697, 1823632563, 3120724469,
    1568573771, 3435400464, 703518081,  817188400,
    3165700845, 27010288,   3087364633, 431601683,
    4030944788, 1853857795, 2691787100, 868104033,
    3265031366, 2189542274, 180288151,  2452030208,
    2748106285, 4225759456, 4035989014, 446256628
};

const uint32_t DataSet_1_32u::outputs::MMAXS[32] = {
    2890127753, 3623131505, 3730078463, 2142934923,
    3878122330, 4195248000, 1453286364, 1634157816,
    587950636,  3299964697, 1823632563, 3120724469,
    1568573771, 3435400464, 703518081,  817188400,
    3165700845, 27010288,   3087364633, 431601683,
    4030944788, 1853857795, 2691787100, 868104033,
    3265031366, 2189542274, 180288151,  2452030208,
    2748106285, 4225759456, 4035989014, 446256628
};

const uint32_t DataSet_1_32u::outputs::MINV[32] = {
    15667904,   794793862,  147627889,  2142934923,
    1586257963, 3765622899, 1453286364, 469642333,
    587950636,  157623475,  1823632563, 2263217432,
    1568573771, 289745607,  703518081,  817188400,
    2086680194, 27010288,   3087364633, 431601683,
    3667110195, 1853857795, 2649569023, 189568803,
    2603418874, 1317779160, 180288151,  2452030208,
    1022843651, 904356825,  2189632558, 446256628
};

const uint32_t DataSet_1_32u::outputs::MMINV[32] = {
    2890127753, 3623131505, 3730078463, 2142934923,
    3878122330, 3765622899, 1453286364, 1634157816,
    587950636,  157623475,  1823632563, 3120724469,
    1568573771, 3435400464, 703518081,  817188400,
    3165700845, 27010288,   3087364633, 431601683,
    3667110195, 1853857795, 2691787100, 189568803,
    2603418874, 2189542274, 180288151,  2452030208,
    2748106285, 904356825,  2189632558, 446256628
};

const uint32_t DataSet_1_32u::outputs::MINS[32] = {
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364,
    636364, 636364, 636364, 636364
};

const uint32_t DataSet_1_32u::outputs::MMINS[32] = {
    2890127753, 3623131505, 3730078463, 636364,
    3878122330, 636364,     636364,     1634157816,
    587950636,  636364,     636364,     3120724469,
    636364,     3435400464, 703518081,  636364,
    3165700845, 636364,     636364,     431601683,
    636364,     1853857795, 2691787100, 636364,
    636364,     2189542274, 180288151,  636364,
    2748106285, 636364,     636364,     446256628
};

const uint32_t DataSet_1_32u::outputs::HMAX[32] = {
    2890127753, 3623131505, 3730078463, 3730078463,
    3878122330, 4195248000, 4195248000, 4195248000,
    4195248000, 4195248000, 4195248000, 4195248000,
    4195248000, 4195248000, 4195248000, 4195248000,
    4195248000, 4195248000, 4195248000, 4195248000,
    4195248000, 4195248000, 4195248000, 4195248000,
    4195248000, 4195248000, 4195248000, 4195248000,
    4195248000, 4225759456, 4225759456, 4225759456
};

const uint32_t DataSet_1_32u::outputs::MHMAX[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::HMIN[32] = {
    2890127753, 2890127753, 2890127753, 2142934923,
    2142934923, 2142934923, 1453286364, 1453286364,
    587950636,  587950636,  587950636,  587950636,
    587950636,  587950636,  587950636,  587950636,
    587950636,  27010288,   27010288,   27010288,
    27010288,   27010288,   27010288,   27010288,
    27010288,   27010288,   27010288,   27010288,
    27010288,   27010288,   27010288,   27010288
};

const uint32_t DataSet_1_32u::outputs::MHMIN[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::SQR[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::MSQR[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::SQRT[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const uint32_t DataSet_1_32u::outputs::MSQRT[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const int32_t DataSet_1_32i::inputs::inputA[32] = {
    948484139,      325061806,      1092824755,     -301586865,
    -873226993,     -1181626453,    68035273,       -1934370231,
    -817803908,     1170504758,     1961487688,     -363273962,
    950418613,      -582437808,     1132387793,     -777060985,
    -1489706084,    -1949446102,    -368683059,     1400938468, 
    -1302030944,    1882764301,     2345500,        1205584894, 
    447369865,      2002189952,     1814442606,     -1252331378,
    -991493688,     1779725208,     620782193,      841973243
};

const int32_t DataSet_1_32i::inputs::inputB[32] = {
     -1887618805,   -1934674551,    2084427857,     -1915569657,
    1858735609,     -405360036,     -962338641,     -1119657200,
    897529765,      -100128913,     -106890800,     -1762804186,
    -1640197658,    -960604164,     -294752717,     -167644897,
    767853874,      1224769104,     -230940897,     -497969136,
    -1500185509,    -1813830137,    600068247,      1457801838,
    882484781,      1351720796,     -1236796659,    -1976020177,
    -1786532694,    -724637555,     258541995,      1192251394
};

const int32_t DataSet_1_32i::inputs::inputC[32] = {
    -1775224743,    -154858053,     777821817,      -468149921,
    822243362,      1119220373,     1488111679,     935142279,
    1590669966,     608031794,      971176515,      1105608663,
    -2094385941,    -192541271,     710475075,      -1712382093,
    1055367934,     2000079676,     -1315499548,    -265930722,
    1856542308,     -2110584009,    -406607791,     159329147,
    909065427,      255613429,      -972120948,     -1588088154,
    -357313165,     1966155567,     1819410331,     -1064864049
};

const uint32_t DataSet_1_32i::inputs::inputShift[32] = {
    1,  39, 4,  8,  24, 35, 27, 11,
    18, 2,  19, 36, 19, 23, 19, 0,
    15, 23, 7,  35, 27, 1,  36, 29,
    11, 17, 20, 30, 7,  18, 34, 26
};

const int32_t DataSet_1_32i::inputs::scalarA = 234123148;
const bool    DataSet_1_32i::inputs::maskA[32] = {
    false,   false,  false,  true,   // 4
    false,  true,   true,   false,  // 8

    false,  true,   true,   false,  
    true,   false,  false,  true,   // 16
    
    false,  true,   true,   false,
    true,   false,  false,  true,
    true,   false,  false,  true,
    false,  true,   true,   false,  // 32
};

const int32_t DataSet_1_32i::outputs::ADDV[32] = {
    -939134666,     -1609612745,    -1117714684,    2077810774,
    985508616,      -1586986489,    -894303368,     1240939865,
    79725857,       1070375845,     1854596888,     -2126078148,
    -689779045,     -1543041972,    837635076,      -944705882,
    -721852210,     -724676998,     -599623956,     902969332,
    1492750843,     68934164,       602413747,      -1631580564,
    1329854646,     -941056548,     577645947,      1066615741,
    1516940914,     1055087653,     879324188,      2034224637
};
const int32_t DataSet_1_32i::outputs::MADDV[32] = {
    948484139,      325061806,      1092824755,     2077810774,
    -873226993,     -1586986489,    -894303368,     -1934370231,
    -817803908,     1070375845,     1854596888,     -363273962,
    -689779045,     -582437808,     1132387793,     -944705882,
    -1489706084,    -724676998,     -599623956,     1400938468,
    1492750843,     1882764301,     2345500,        -1631580564,
    1329854646,     2002189952,     1814442606,     1066615741,
    -991493688,     1055087653,     879324188,      841973243
};
const int32_t DataSet_1_32i::outputs::ADDS[32] = {
    1182607287,     559184954,      1326947903,     -67463717,
    -639103845,     -947503305,     302158421,      -1700247083,
    -583680760,     1404627906,     -2099356460,    -129150814,
    1184541761,     -348314660,     1366510941,     -542937837,
    -1255582936,    -1715322954,    -134559911,     1635061616,
    -1067907796,    2116887449,     236468648,      1439708042,
    681493013,      -2058654196,    2048565754,     -1018208230,
    -757370540,     2013848356,     854905341,      1076096391
};
const int32_t DataSet_1_32i::outputs::MADDS[32] = {
    948484139,      325061806,      1092824755,     -67463717,
    -873226993,     -947503305,     302158421,      -1934370231,
    -817803908,     1404627906,     -2099356460,    -363273962,
    1184541761,     -582437808,     1132387793,     -542937837,
    -1489706084,    -1715322954,    -134559911,     1400938468,
    -1067907796,    1882764301,     2345500,        1439708042,
    681493013,      2002189952,     1814442606,     -1018208230,
    -991493688,     2013848356,     854905341,      841973243
};
const int32_t DataSet_1_32i::outputs::POSTPREFINC[32] = {
    948484140,      325061807,      1092824756,     -301586864,
    -873226992,     -1181626452,    68035274,       -1934370230,
    -817803907,     1170504759,     1961487689,     -363273961,
    950418614,      -582437807,     1132387794,     -777060984,
    -1489706083,    -1949446101,    -368683058,     1400938469,
    -1302030943,    1882764302,     2345501,        1205584895,
    447369866,      2002189953,     1814442607,     -1252331377,
    -991493687,     1779725209,     620782194,      841973244
};
const int32_t DataSet_1_32i::outputs::MPOSTPREFINC[32] = {
    948484139,      325061806,      1092824755,     -301586864,
    -873226993,     -1181626452,    68035274,       -1934370231,
    -817803908,     1170504759,     1961487689,     -363273962,
    950418614,      -582437808,     1132387793,     -777060984,
    -1489706084,    -1949446101,    -368683058,     1400938468,
    -1302030943,    1882764301,     2345500,        1205584895,
    447369866,      2002189952,     1814442606,     -1252331377,
    -991493688,     1779725209,     620782194,      841973243,
};
const int32_t DataSet_1_32i::outputs::SUBV[32] = {
    -1458864352,    -2035230939,    -991603102,     1613982792,
    1563004694,     -776266417,     1030373914,     -814713031,
    -1715333673,    1270633671,     2068378488,     1399530224,
    -1704351025,    378166356,      1427140510,     -609416088,
    2037407338,     1120752090,     -137742162,     1898907604,
    198154565,      -598372858,     -597722747,     -252216944,
    -435114916,     650469156,      -1243728031,    723688799,
    795039006,      -1790604533,    362240198,      -350278151
};
const int32_t DataSet_1_32i::outputs::MSUBV[32] = {
    948484139,      325061806,      1092824755,     1613982792,
    -873226993,     -776266417,     1030373914,     -1934370231,
    -817803908,     1270633671,     2068378488,     -363273962,
    -1704351025,    -582437808,     1132387793,     -609416088,
    -1489706084,    1120752090,     -137742162,     1400938468,
    198154565,      1882764301,     2345500,        -252216944,
    -435114916,     2002189952,     1814442606,     723688799,
    -991493688,     -1790604533,    362240198,      841973243
};
const int32_t DataSet_1_32i::outputs::SUBS[32] = {
    714360991,      90938658,       858701607,      -535710013,
    -1107350141,    -1415749601,    -166087875,     2126473917,
    -1051927056,    936381610,      1727364540,     -597397110,
    716295465,      -816560956,     898264645,      -1011184133,
    -1723829232,    2111398046,     -602806207,     1166815320,
    -1536154092,    1648641153,     -231777648,     971461746,
    213246717,      1768066804,     1580319458,     -1486454526,
    -1225616836,    1545602060,     386659045,      607850095
};
const int32_t DataSet_1_32i::outputs::MSUBS[32] = {
    948484139,      325061806,      1092824755,     -535710013,
    -873226993,     -1415749601,    -166087875,     -1934370231,
    -817803908,     936381610,      1727364540,     -363273962,
    716295465,      -582437808,     1132387793,     -1011184133,
    -1489706084,    2111398046,     -602806207,     1400938468,
    -1536154092,    1882764301,     2345500,        971461746,
    213246717,      2002189952,     1814442606,     -1486454526,
    -991493688,     1545602060,     386659045,      841973243
};
const int32_t DataSet_1_32i::outputs::SUBFROMV[32] = {
    1458864352,     2035230939,     991603102,      -1613982792,
    -1563004694,    776266417,      -1030373914,    814713031,
    1715333673,     -1270633671,    -2068378488,    -1399530224,
    1704351025,     -378166356,     -1427140510,    609416088,
    -2037407338,    -1120752090,    137742162,      -1898907604,
    -198154565,     598372858,      597722747,      252216944,
    435114916,      -650469156,     1243728031,     -723688799,
    -795039006,     1790604533,     -362240198,     350278151
};
const int32_t DataSet_1_32i::outputs::MSUBFROMV[32] = {
    -1887618805,    -1934674551,    2084427857,     -1613982792,
    1858735609,     776266417,      -1030373914,    -1119657200,
    897529765,      -1270633671,    -2068378488,    -1762804186,
    1704351025,     -960604164,     -294752717,     609416088,
    767853874,      -1120752090,    137742162,      -497969136,
    -198154565,     -1813830137,    600068247,      252216944,
    435114916,      1351720796,     -1236796659,    -723688799,
    -1786532694,    1790604533,     -362240198,     1192251394
};
const int32_t DataSet_1_32i::outputs::SUBFROMS[32] = {
    -714360991,     -90938658,      -858701607,     535710013,
    1107350141,     1415749601,     166087875,      -2126473917,
    1051927056,     -936381610,     -1727364540,    597397110,
    -716295465,     816560956,      -898264645,     1011184133,
    1723829232,     -2111398046,    602806207,      -1166815320,
    1536154092,     -1648641153,    231777648,      -971461746,
    -213246717,     -1768066804,    -1580319458,    1486454526,
    1225616836,     -1545602060,    -386659045,     -607850095
};
const int32_t DataSet_1_32i::outputs::MSUBFROMS[32] = {
    234123148,      234123148,      234123148,      535710013,
    234123148,      1415749601,     166087875,      234123148,
    234123148,      -936381610,     -1727364540,    234123148,
    -716295465,     234123148,      234123148,      1011184133,
    234123148,      -2111398046,    602806207,      234123148,
    1536154092,     234123148,      234123148,      -971461746,
    -213246717,     234123148,      234123148,      1486454526,
    234123148,      -1545602060,    -386659045,     234123148
};
const int32_t DataSet_1_32i::outputs::POSTPREFDEC[32] = {
    948484138,      325061805,      1092824754,     -301586866,
    -873226994,     -1181626454,    68035272,       -1934370232,
    -817803909,     1170504757,     1961487687,     -363273963,
    950418612,      -582437809,     1132387792,     -777060986,
    -1489706085,    -1949446103,    -368683060,     1400938467,
    -1302030945,    1882764300,     2345499,        1205584893,
    447369864,      2002189951,     1814442605,     -1252331379,
    -991493689,     1779725207,     620782192,      841973242
};
const int32_t DataSet_1_32i::outputs::MPOSTPREFDEC[32] = {
    948484139,      325061806,      1092824755,     -301586866,
    -873226993,     -1181626454,    68035272,       -1934370231,
    -817803908,     1170504757,     1961487687,     -363273962,
    950418612,      -582437808,     1132387793,     -777060986,
    -1489706084,    -1949446103,    -368683060,     1400938468,
    -1302030945,    1882764301,     2345500,        1205584893,
    447369864,      2002189952,     1814442606,     -1252331379,
    -991493688,     1779725207,     620782192,      841973243
};
const int32_t DataSet_1_32i::outputs::MULV[32] = {
    -790594343,     335073054,      540004003,      -372346327,
    516130455,      -121796748,     -1072388249,    1589829520,
    -1186949908,    -858909334,     -623127936,     94223684,
    -30863458,      1010347712,     -1822163293,    -664548775,
    -771456904,     -154814176,     2037544147,     1981636160,
    -1383419936,    -1697785253,    -709560700,     1229824804,
    1230395413,     299169280,      568617366,      -222284782,
    1207013072,     -631936328,     -1173308805,    -1200788490
};
const int32_t DataSet_1_32i::outputs::MMULV[32] = {
    948484139,      325061806,      1092824755,     -372346327,
    -873226993,     -121796748,     -1072388249,    -1934370231,
    -817803908,     -858909334,     -623127936,     -363273962,
    -30863458,      -582437808,     1132387793,     -664548775,
    -1489706084,    -154814176,     2037544147,     1400938468,
    -1383419936,    1882764301,     2345500,        1229824804,
    1230395413,     2002189952,     1814442606,     -222284782,
    -991493688,     -631936328,     -1173308805,    841973243
};
const int32_t DataSet_1_32i::outputs::MULS[32] = {
    -358916988,     702439720,      2048468708,     1548039220,
    -1616943820,    1388623492,     -1251726100,    -1332410644,
    -830528560,     2059884424,     779090784,      1496031752,
    482323964,      1982942144,     -205329076,     189542100,
    1011686736,     1004014840,     -739383524,     1761299632,
    -396217472,     980949532,      -1494963376,    1245860072,
    243436012,      233614848,      1536771624,     425795496,
    -1296387744,    -970055904,     -140978996,     -606815676
};
const int32_t DataSet_1_32i::outputs::MMULS[32] = {
    948484139,      325061806,      1092824755,     1548039220,
    -873226993,     1388623492,     -1251726100,    -1934370231,
    -817803908,     2059884424,     779090784,      -363273962,
    482323964,      -582437808,     1132387793,     189542100,
    -1489706084,    1004014840,     -739383524,     1400938468,
    -396217472,     1882764301,     2345500,        1245860072,
    243436012,      2002189952,     1814442606,     425795496,
    -991493688,     -970055904,     -140978996,     841973243
};
const int32_t DataSet_1_32i::outputs::DIVV[32] = {
    0,      0,      0,      0,  0,      2,      0,      1,
    0,      -11,    -18,    0,  0,      0,      -3,     4,
    -1,     -1,     1,      -2, 0,      -1,     0,      0,
    0,      1,      -1,     0,  0,      -2,     2,      0
};
const int32_t DataSet_1_32i::outputs::MDIVV[32] = {
    948484139,      325061806,      1092824755,     0,
    -873226993,     2,              0,              -1934370231,
    -817803908,     -11,            -18,            -363273962,
    0,              -582437808,     1132387793,     4,
    -1489706084,    -1,             1,              1400938468,
    0,              1882764301,     2345500,        0,
    0,              2002189952,     1814442606,     0,
    -991493688,     -2,             2,              841973243
};
const int32_t DataSet_1_32i::outputs::DIVS[32] = {
    4,      1,      4,      -1,     -3,     -5,     0,      -8,
    -3,     4,      8,      -1,     4,      -2,     4,      -3,
    -6,     -8,     -1,     5,      -5,     8,      0,      5,
    1,      8,      7,      -5,     -4,     7,      2,      3
};
const int32_t DataSet_1_32i::outputs::MDIVS[32] = {
    948484139,      325061806,      1092824755,     -1,
    -873226993,     -5,             0,              -1934370231,
    -817803908,     4,              8,              -363273962,
    4,              -582437808,     1132387793,     -3,
    -1489706084,    -8,             -1,             1400938468,
    -5,             1882764301,     2345500,        5,
    1,              2002189952,     1814442606,     -5,
    -991493688,     7,              2,              841973243
};
const int32_t DataSet_1_32i::outputs::RCP[32] = {
    0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0,
    0,      0,      0,      0,      0,      0,      0,      0
};
const int32_t DataSet_1_32i::outputs::MRCP[32] = {
    948484139,      325061806,      1092824755,     0,
    -873226993,     0,              0,              -1934370231,
    -817803908,     0,              0,              -363273962,
    0,              -582437808,     1132387793,     0,
    -1489706084,    0,              0,              1400938468,
    0,              1882764301,     2345500,        0,
    0,              2002189952,     1814442606,     0,
    -991493688,     0,              0,              841973243
};
const int32_t DataSet_1_32i::outputs::RCPS[32] = {
    0,      0,      0,      0,
    0,      0,      3,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      0,      0,
    0,      0,      99,     0,
    0,      0,      0,      0,
    0,      0,      0,      0
};
const int32_t DataSet_1_32i::outputs::MRCPS[32] = {
    948484139,      325061806,      1092824755,     0,
    -873226993,     0,              3,              -1934370231,
    -817803908,     0,              0,              -363273962,
    0,              -582437808,     1132387793,     0,
    -1489706084,    0,              0,              1400938468,
    0,              1882764301,     2345500,        0,
    0,              2002189952,     1814442606,     0,
    -991493688,     0,              0,              841973243
};
const bool  DataSet_1_32i::outputs::CMPEQV[32] = {
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false
};
const bool  DataSet_1_32i::outputs::CMPEQS[32] = {
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false,
    false,  false,  false,  false
};
const bool  DataSet_1_32i::outputs::CMPNEV[32] = {
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true
};
const bool  DataSet_1_32i::outputs::CMPNES[32] = {
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true,
    true,   true,   true,   true
};
const bool  DataSet_1_32i::outputs::CMPGTV[32] = {
    true,   true,   false,  true,
    false,  false,  true,   false,
    false,  true,   true,   true,
    true,   true,   true,   false,
    false,  false,  false,  true,
    true,   true,   false,  false,
    false,  true,   true,   true,
    true,   true,   true,   false
};
const bool  DataSet_1_32i::outputs::CMPGTS[32] = {
    true,   true,   true,   false,
    false,  false,  false,  false,
    false,  true,   true,   false,
    true,   false,  true,   false,
    false,  false,  false,  true,
    false,  true,   false,  true,
    true,   true,   true,   false,
    false,  true,   true,   true
};
const bool  DataSet_1_32i::outputs::CMPLTV[32] = {
    false,  false,  true,   false,
    true,   true,   false,  true,
    true,   false,  false,  false,
    false,  false,  false,  true,
    true,   true,   true,   false,
    false,  false,  true,   true,
    true,   false,  false,  false,
    false,  false,  false,  true
};
const bool  DataSet_1_32i::outputs::CMPLTS[32] = {
    false,  false,  false,  true,
    true,   true,   true,   true,
    true,   false,  false,  true,
    false,  true,   false,  true,
    true,   true,   true,   false,
    true,   false,  true,   false,
    false,  false,  false,  true,
    true,   false,  false,  false
};
const bool  DataSet_1_32i::outputs::CMPGEV[32] = {
    true,   true,   false,  true,
    false,  false,  true,   false,
    false,  true,   true,   true,
    true,   true,   true,   false,
    false,  false,  false,  true,
    true,   true,   false,  false,
    false,  true,   true,   true,
    true,   true,   true,   false
};
const bool  DataSet_1_32i::outputs::CMPGES[32] = {
    true,   true,   true,   false,
    false,  false,  false,  false,
    false,  true,   true,   false,
    true,   false,  true,   false,
    false,  false,  false,  true,
    false,  true,   false,  true,
    true,   true,   true,   false,
    false,  true,   true,   true
};
const bool  DataSet_1_32i::outputs::CMPLEV[32] = {
    false,  false,  true,   false,
    true,   true,   false,  true,
    true,   false,  false,  false,
    false,  false,  false,  true,
    true,   true,   true,   false,
    false,  false,  true,   true,
    true,   false,  false,  false,
    false,  false,  false,  true
};
const bool  DataSet_1_32i::outputs::CMPLES[32] = {
    false,  false,  false,  true,
    true,   true,   true,   true,
    true,   false,  false,  true,
    false,  true,   false,  true,
    true,   true,   true,   false,
    true,   false,  true,   false,
    false,  false,  false,  true,
    true,   false,  false,  false
};

const bool  DataSet_1_32i::outputs::CMPEV = false;
const bool  DataSet_1_32i::outputs::CMPES = false;

const int32_t DataSet_1_32i::outputs::HADD[32] = {
    948484139,      1273545945,     -1928596596,    2064783835,
    1191556842,     9930389,        77965662,       -1856404569,
    1620758819,     -1503703719,    457783969,      94510007,
    1044928620,     462490812,      1594878605,     817817620,
    -671888464,     1673632730,     1304949671,     -1589079157,
    1403857195,     -1008345800,    -1006000300,    199584594,
    646954459,      -1645822885,    168619721,      -1083711657,
    -2075205345,    -295480137,     325302056,      1167275299
};
const int32_t DataSet_1_32i::outputs::MHADD[32] = {
    0,              0,              0,              -301586865,
    -301586865,     -1483213318,    -1415178045,    -1415178045,
    -1415178045,    -244673287,     1716814401,     1716814401,
    -1627734282,    -1627734282,    -1627734282,    1890172029,
    1890172029,     -59274073,      -427957132,     -427957132,
    -1729988076,    -1729988076,    -1729988076,    -524403182,
    -77033317,      -77033317,      -77033317,      -1329364695,
    -1329364695,    450360513,      1071142706,     1071142706
};
const int32_t DataSet_1_32i::outputs::HMUL[32] = {
    948484139,      380580154,      -867838066,     2027985106,
    1748483662,     -666161126,     -656918422,     1607490106,
    -490133992,     -415127280,     -208970624,     910586624,
    1958956800,     143962112,      -44847104,      -334376960,
    -431308800,     1145274368,     -1702002688,    -2004484096,
    1371537408,     650117120,      -1124073472,    -2046820352,
    -1241513984,    0,              0,              0,
    0,              0,              0,              0

};
const int32_t DataSet_1_32i::outputs::MHMUL[32] = {
    1,              1,              1,              -301586865,
    -301586865,     -1059817531,    1065366445,     1065366445,
    1065366445,     -1350126978,    -1647388304,    -1647388304,
    -1932133328,    -1932133328,    -1932133328,    1471376720,
    1471376720,     626061088,      1037261984,     1037261984,
    394462208,      394462208,      394462208,      -1945503744,
    -758794240,     -758794240,     -758794240,     -164884480,
    -164884480,     895057920,      -813596672,     -813596672
};

const int32_t DataSet_1_32i::outputs::FMULADDV[32] = {
    1729148210,     180215001,      1317825820,     -840496248,
    1338373817,     997423625,      415723430,      -1769995497,
    403720058,      -250877540,     348048579,      1199832347,
    -2125249399,    817806441,      -1111688218,    1918036428,
    283911030,      1845265500,     722044599,      1715705438,
    473122372,      486598034,      -1116168491,    1389153951,
    2139460840,     554782709,      -403503582,     -1810372936,
    849699907,      1334219239,     646101526,      2029314757
};
const int32_t DataSet_1_32i::outputs::MFMULADD[32] = {
    948484139,      325061806,      1092824755,     -840496248,
    -873226993,     997423625,      415723430,      -1934370231,
    -817803908,     -250877540,     348048579,      -363273962,
    -2125249399,    -582437808,     1132387793,     1918036428,
    -1489706084,    1845265500,     722044599,      1400938468,
    473122372,      1882764301,     2345500,        1389153951,
    2139460840,     2002189952,     1814442606,     -1810372936,
    -991493688,     1334219239,     646101526,      841973243
};
const int32_t DataSet_1_32i::outputs::FMULSUBV[32] = {
    984630400,      489931107,      -237817814,     95803594,
    -306112907,     -1241017121,    1734467368,     654687241,
    1517347422,     -1466941128,    -1594304451,    -1011384979,
    2063522483,     1202888983,     1762328928,     1047833318,
    -1826824838,    2140073444,     -941923601,     -2047400414,
    1055005052,     412798756,      -302952909,     1070495657,
    321329986,      43555851,       1540738314,     1365803372,
    1564326237,     1696875401,     1302248160,     -135924441

};
const int32_t DataSet_1_32i::outputs::MFMULSUBV[32] = {
    948484139,      325061806,      1092824755,     95803594,
    -873226993,     -1241017121,    1734467368,     -1934370231,
    -817803908,     -1466941128,    -1594304451,    -363273962,
    2063522483,     -582437808,     1132387793,     1047833318,
    -1489706084,    2140073444,     -941923601,     1400938468,
    1055005052,     1882764301,     2345500,        1070495657,
    321329986,      2002189952,     1814442606,     1365803372,
    -991493688,     1696875401,     1302248160,     841973243
};
const int32_t DataSet_1_32i::outputs::FADDMULV[32] = {
    -1259033658,    2144676141,     -1566521116,    866035178,
    -1508624624,    2041662483,     -1644914040,    947487983,
    1124715086,     533568058,      -281547960,     1063747428,
    -1969675191,    -2079393236,    1587206412,     609963666,
    -1716889500,    -1135533416,    -431253968,     1494740632,
    -1547823092,    -1370048948,    -1991316829,    2085032420,
    1354409474,     336629644,      -1766730940,    -2133698930,
    -1899546826,    -1159950901,    1189107956,     -738906733
};
const int32_t DataSet_1_32i::outputs::MFADDMULV[32] = {
    948484139,      325061806,      1092824755,     866035178,
    -873226993,     2041662483,     -1644914040,    -1934370231,
    -817803908,     533568058,      -281547960,     -363273962,
    -1969675191,    -582437808,     1132387793,     609963666,
    -1489706084,    -1135533416,    -431253968,     1400938468,
    -1547823092,    1882764301,     2345500,        2085032420,
    1354409474,     2002189952,     1814442606,     -2133698930,
    -991493688,     -1159950901,    1189107956,     841973243
};
const int32_t DataSet_1_32i::outputs::FSUBMULV[32] = {
    -556912096,     2073233671,     1122914386,     -1249102152,
    -498425620,     175619323,      115250278,      145795599,
    -676291774,     -261596450,     701163624,      -1070372976,
    682088453,      1275017076,     -873702310,     1616194232,
    1994572076,     302189848,      -629143304,     1991330520,
    2083409140,     1521337674,     -180110571,     -1228761040,
    -1794662444,    560435572,      -325884660,     1143413146,
    -546622854,     -1542573051,    -1955202590,    2075521623
};
const int32_t DataSet_1_32i::outputs::MFSUBMULV[32] = {
    948484139,      325061806,      1092824755,     -1249102152,
    -873226993,     175619323,      115250278,      -1934370231,
    -817803908,     -261596450,     701163624,      -363273962,
    682088453,      -582437808,     1132387793,     1616194232,
    -1489706084,    302189848,      -629143304,     1400938468,
    2083409140,     1882764301,     2345500,        -1228761040,
    -1794662444,    2002189952,     1814442606,     1143413146,
    -991493688,     -1542573051,    -1955202590,    841973243
};
const int32_t DataSet_1_32i::outputs::MAXV[32] = {
    948484139,      325061806,      2084427857,     -301586865,
    1858735609,     -405360036,     68035273,       -1119657200,
    897529765,      1170504758,     1961487688,     -363273962,
    950418613,      -582437808,     1132387793,     -167644897,
    767853874,      1224769104,     -230940897,     1400938468,
    -1302030944,    1882764301,     600068247,      1457801838,
    882484781,      2002189952,     1814442606,     -1252331378,
    -991493688,     1779725208,     620782193,      1192251394
};
const int32_t DataSet_1_32i::outputs::MMAXV[32] = {
    948484139,      325061806,      1092824755,     -301586865,
    -873226993,     -405360036,     68035273,       -1934370231,
    -817803908,     1170504758,     1961487688,     -363273962,
    950418613,      -582437808,     1132387793,     -167644897,
    -1489706084,    1224769104,     -230940897,     1400938468,
    -1302030944,    1882764301,     2345500,        1457801838,
    882484781,      2002189952,     1814442606,     -1252331378,
    -991493688,     1779725208,     620782193,      841973243
};
const int32_t DataSet_1_32i::outputs::MAXS[32] = {
    948484139,      325061806,      1092824755,     234123148,
    234123148,      234123148,      234123148,      234123148,
    234123148,      1170504758,     1961487688,     234123148,
    950418613,      234123148,      1132387793,     234123148,
    234123148,      234123148,      234123148,      1400938468,
    234123148,      1882764301,     234123148,      1205584894,
    447369865,      2002189952,     1814442606,     234123148,
    234123148,      1779725208,     620782193,      841973243
};
const int32_t DataSet_1_32i::outputs::MMAXS[32] = {
    948484139,      325061806,      1092824755,     234123148,
    -873226993,     234123148,      234123148,      -1934370231,
    -817803908,     1170504758,     1961487688,     -363273962,
    950418613,      -582437808,     1132387793,     234123148,
    -1489706084,    234123148,      234123148,      1400938468,
    234123148,      1882764301,     2345500,        1205584894,
    447369865,      2002189952,     1814442606,     234123148,
    -991493688,     1779725208,     620782193,      841973243
};
const int32_t DataSet_1_32i::outputs::MINV[32] = {
    -1887618805,    -1934674551,    1092824755,     -1915569657,
    -873226993,     -1181626453,    -962338641,     -1934370231,
    -817803908,     -100128913,     -106890800,     -1762804186,
    -1640197658,    -960604164,     -294752717,     -777060985,
    -1489706084,    -1949446102,    -368683059,     -497969136,
    -1500185509,    -1813830137,    2345500,        1205584894,
    447369865,      1351720796,     -1236796659,    -1976020177,
    -1786532694,    -724637555,     258541995,      841973243
};
const int32_t DataSet_1_32i::outputs::MMINV[32] = {
    948484139,      325061806,      1092824755,     -1915569657,
    -873226993,     -1181626453,    -962338641,     -1934370231,
    -817803908,     -100128913,     -106890800,     -363273962,
    -1640197658,    -582437808,     1132387793,     -777060985,
    -1489706084,    -1949446102,    -368683059,     1400938468,
    -1500185509,    1882764301,     2345500,        1205584894,
    447369865,      2002189952,     1814442606,     -1976020177,
    -991493688,     -724637555,     258541995,      841973243
};
const int32_t DataSet_1_32i::outputs::MINS[32] = {
    234123148,      234123148,      234123148,      -301586865,
    -873226993,     -1181626453,    68035273,       -1934370231,
    -817803908,     234123148,      234123148,      -363273962,
    234123148,      -582437808,     234123148,      -777060985,
    -1489706084,    -1949446102,    -368683059,     234123148,
    -1302030944,    234123148,      2345500,        234123148,
    234123148,      234123148,      234123148,      -1252331378,
    -991493688,     234123148,      234123148,      234123148
};
const int32_t DataSet_1_32i::outputs::MMINS[32] = {
    948484139,      325061806,      1092824755,     -301586865,
    -873226993,     -1181626453,    68035273,       -1934370231,
    -817803908,     234123148,      234123148,      -363273962,
    234123148,      -582437808,     1132387793,     -777060985,
    -1489706084,    -1949446102,    -368683059,     1400938468,
    -1302030944,    1882764301,     2345500,        234123148,
    234123148,      2002189952,     1814442606,     -1252331378,
    -991493688,     234123148,      234123148,      841973243
};
const int32_t DataSet_1_32i::outputs::HMAX[32] = {
    948484139,      948484139,      1092824755,     1092824755,
    1092824755,     1092824755,     1092824755,     1092824755,
    1092824755,     1170504758,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     2002189952,     2002189952,     2002189952,
    2002189952,     2002189952,     2002189952,     2002189952
};
const int32_t DataSet_1_32i::outputs::MHMAX[32] = {
    -2147483647,    -2147483647,    -2147483647,    -301586865,
    -301586865,     -301586865,     68035273,       68035273,
    68035273,       1170504758,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688,
    1961487688,     1961487688,     1961487688,     1961487688
};
const int32_t DataSet_1_32i::outputs::HMIN[32] = {
    948484139,      325061806,      325061806,      -301586865,
    -873226993,     -1181626453,    -1181626453,    -1934370231,
    -1934370231,    -1934370231,    -1934370231,    -1934370231,
    -1934370231,    -1934370231,    -1934370231,    -1934370231,
    -1934370231,    -1949446102,    -1949446102,    -1949446102,
    -1949446102,    -1949446102,    -1949446102,    -1949446102,
    -1949446102,    -1949446102,    -1949446102,    -1949446102,
    -1949446102,    -1949446102,    -1949446102,    -1949446102
};
const int32_t DataSet_1_32i::outputs::MHMIN[32] = {
    2147483647,     2147483647,     2147483647,     -301586865,
    -301586865,     -1181626453,    -1181626453,    -1181626453,
    -1181626453,    -1181626453,    -1181626453,    -1181626453,
    -1181626453,    -1181626453,    -1181626453,    -1181626453,
    -1181626453,    -1949446102,    -1949446102,    -1949446102,
    -1949446102,    -1949446102,    -1949446102,    -1949446102,
    -1949446102,    -1949446102,    -1949446102,    -1949446102,
    -1949446102,    -1949446102,    -1949446102,    -1949446102
};
const int32_t DataSet_1_32i::outputs::SQR[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
const int32_t DataSet_1_32i::outputs::MSQR[32] = {
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};

const int32_t DataSet_1_32i::outputs::BANDV[32] = {
    134756363,      2098312,        1075906577,     -1946017273,
    1254231305,     -1584365048,    67248265,       -1945943552,
    88147236,       1073751078,     1889593664,     -2109169658,
    405016740,      -1006103472,    1114524689,     -805244665,
    621052176,      151015424,      -503048435,     1107335168,
    -1576758272,    270541829,      16404,          1187005038,
    277348873,      1343266304,     604385804,      -2145890290,
    -2071789432,    1074028680,     83886113,       33574914
};
const int32_t DataSet_1_32i::outputs::MBANDV[32] = {
    948484139,      325061806,      1092824755,     -1946017273,
    -873226993,     -1584365048,    67248265,       -1934370231,
    -817803908,     1073751078,     1889593664,     -363273962,
    405016740,      -582437808,     1132387793,     -805244665,
    -1489706084,    151015424,      -503048435,     1400938468,
    -1576758272,    1882764301,     2345500,        1187005038,
    277348873,      2002189952,     1814442606,     -2145890290,
    -991493688,     1074028680,     83886113,       841973243
};
const int32_t DataSet_1_32i::outputs::BANDS[32] = {
    142616584,      23071884,       18886272,       201598476,
    166726924,      160452488,      67379848,       212879880,
    222317836,      96758788,       81816840,       139485444,
    144977028,      222307328,      24399232,       27553156,
    87319436,       163856392,      134498188,      25169796,
    6555008,        3154956,        2116108,        97534860,
    144720520,      89419392,       203694604,      89153676,
    82051464,       135553928,      83911168,       2387336
};
const int32_t DataSet_1_32i::outputs::MBANDS[32] = {
    948484139,      325061806,      1092824755,     201598476,
    -873226993,     160452488,      67379848,       -1934370231,
    -817803908,     96758788,       81816840,       -363273962,
    144977028,      -582437808,     1132387793,     27553156,
    -1489706084,    163856392,      134498188,      1400938468,
    6555008,        1882764301,     2345500,        97534860,
    144720520,      2002189952,     1814442606,     89153676,
    -991493688,     135553928,      83911168,       841973243
};
const int32_t DataSet_1_32i::outputs::BORV[32] = {
    -1073891029,    -1611711057,    2101346035,     -271139249,
    -268722689,     -2621441,       -961551633,     -1108083879,
    -8421379,       -3375233,       -34996776,      -16908490,
    -1094795785,    -536938500,     -276889613,     -139461217,
    -1342904386,    -875692422,     -96575521,      -204365836,
    -1225458181,    -201607665,     602397343,      1476381694,
    1052505773,     2010644444,     -26739857,      -1082461265,
    -706236950,     -18941027,      795438075,      2000649723
};
const int32_t DataSet_1_32i::outputs::MBORV[32] = {
    948484139,      325061806,      1092824755,     -271139249,
    -873226993,     -2621441,       -961551633,     -1934370231,
    -817803908,     -3375233,       -34996776,      -363273962,
    -1094795785,    -582437808,     1132387793,     -139461217,
    -1489706084,    -875692422,     -96575521,      1400938468,
    -1225458181,    1882764301,     2345500,        1476381694,
    1052505773,     2002189952,     1814442606,     -1082461265,
    -991493688,     -18941027,      795438075,      841973243
};
const int32_t DataSet_1_32i::outputs::BORS[32] = {
    1039990703,     536113070,      1308061631,     -269062193,
    -805830769,     -1107955793,    234778573,      -1913126963,
    -805998596,     1307869118,     2113793996,     -268636258,
    1039564733,     -570621988,     1342111709,     -570490993,
    -1342902372,    -1879179346,    -269058099,     1609891820,
    -1074462804,    2113732493,     234352540,      1342173182,
    536772493,      2146893708,     1844871150,     -1107361906,
    -839422004,     1878294428,     770994173,      1073709055
};
const int32_t DataSet_1_32i::outputs::MBORS[32] = {
    948484139,      325061806,      1092824755,     -269062193,
    -873226993,     -1107955793,    234778573,      -1934370231,
    -817803908,     1307869118,     2113793996,     -363273962,
    1039564733,     -582437808,     1132387793,     -570490993,
    -1489706084,    -1879179346,    -269058099,     1400938468,
    -1074462804,    1882764301,     2345500,        1342173182,
    536772493,      2002189952,     1814442606,     -1107361906,
    -991493688,     1878294428,     770994173,      841973243
};
const int32_t DataSet_1_32i::outputs::BXORV[32] = {
    -1208647392,    -1613809369,    1025439458,     1674878024,
    -1522953994,    1581743607,     -1028799898,    837859673,
    -96568615,      -1077126311,    -1924590440,    2092261168,
    -1499812525,    469164972,      -1391414302,    665783448,
    -1963956562,    -1026707846,    406472914,      -1311701004,
    351300091,      -472149494,     602380939,      289376656,
    775156900,      667378140,      -631125661,     1063429025,
    1365552482,     -1092969707,    711551962,      1967074809
};
const int32_t DataSet_1_32i::outputs::MBXORV[32] = {
    948484139,      325061806,      1092824755,     1674878024,
    -873226993,     1581743607,     -1028799898,    -1934370231,
    -817803908,     -1077126311,    -1924590440,    -363273962,
    -1499812525,    -582437808,     1132387793,     665783448,
    -1489706084,    -1026707846,    406472914,      1400938468,
    351300091,      1882764301,     2345500,        289376656,
    775156900,      2002189952,     1814442606,     1063429025,
    -991493688,     -1092969707,    711551962,      841973243
};
const int32_t DataSet_1_32i::outputs::BXORS[32] = {
    897374119,      513041186,      1289175359,     -470660669,
    -972557693,     -1268408281,    167398725,      -2126006843,
    -1028316432,    1211110330,     2031977156,     -408121702,
    894587705,      -792929316,     1317712477,     -598044149,
    -1430221808,    -2043035738,    -403556287,     1584722024,
    -1081017812,    2110577537,     232236432,      1244638322,
    392051973,      2057474316,     1641176546,     -1196515582,
    -921473468,     1742740500,     687083005,      1071321719
};
const int32_t DataSet_1_32i::outputs::MBXORS[32] = {
    948484139,      325061806,      1092824755,     -470660669,
    -873226993,     -1268408281,    167398725,      -1934370231,
    -817803908,     1211110330,     2031977156,     -363273962,
    894587705,      -582437808,     1132387793,     -598044149,
    -1489706084,    -2043035738,    -403556287,     1400938468,
    -1081017812,    1882764301,     2345500,        1244638322,
    392051973,      2002189952,     1814442606,     -1196515582,
    -991493688,     1742740500,     687083005,      841973243
};
const int32_t DataSet_1_32i::outputs::BNOT[32] = {
    -948484140,     -325061807,     -1092824756,    301586864,
    873226992,      1181626452,     -68035274,      1934370230,
    817803907,      -1170504759,    -1961487689,    363273961,
    -950418614,     582437807,      -1132387794,    777060984,
    1489706083,     1949446101,     368683058,      -1400938469,
    1302030943,     -1882764302,    -2345501,       -1205584895,
    -447369866,     -2002189953,    -1814442607,    1252331377,
    991493687,      -1779725209,    -620782194,     -841973244
};
const int32_t DataSet_1_32i::outputs::MBNOT[32] = {
    948484139,      325061806,      1092824755,     301586864,
    -873226993,     1181626452,     -68035274,      -1934370231,
    -817803908,     -1170504759,    -1961487689,    -363273962,
    -950418614,     -582437808,     1132387793,     777060984,
    -1489706084,    1949446101,     368683058,      1400938468,
    1302030943,     1882764301,     2345500,        -1205584895,
    -447369866,     2002189952,     1814442606,     1252331377,
    -991493688,     -1779725209,    -620782194,     841973243
};

const int32_t DataSet_1_32i::outputs::HAND[32] = {
    948484139,      268437546,      2082,           2,
    2,              2,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0
};
const int32_t DataSet_1_32i::outputs::MHAND[32] = {
    -1,             -1,             -1,             -301586865,
    -301586865,     -1476393461,    521,            521,
    521,            0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0,
    0,              0,              0,              0
};
const int32_t DataSet_1_32i::outputs::HOR[32] = {
    948484139,      1005108399,     2079047359,     -1065217,
    -16385,         -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1
};
const int32_t DataSet_1_32i::outputs::MHOR[32] = {
    0,              0,              0,              -301586865,
    -301586865,     -6819857,       -6295569,       -6295569,
    -6295569,       -2097153,       -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1,
    -1,             -1,             -1,             -1
};
const int32_t DataSet_1_32i::outputs::HXOR[32] = {
    948484139,      736670853,      1791728182,     -2066891655,
    1329471862,     -156242211,     -224277484,     2115114589,
    -1319937247,    -191420649,     -2139174305,    1780886345,
    1384126460,     -1882676308,    -860455299,     488145914,
    -1171496858,    836874316,      -605558911,     -2006484891,
    973336005,      1245403592,     1243124692,     230903850,
    392757923,      1614806051,     203017805,      -1186775357,
    2107916043,     397429907,      850407138,      10441497
};
const int32_t DataSet_1_32i::outputs::MHXOR[32] = {
    0,              0,              0,              -301586865,
    -301586865,     1469573604,     1402587949,     1402587949,
    1402587949,     375240475,      1655986771,     1655986771,
    1511155430,     1511155430,     1511155430,     -1950573727,
    -1950573727,    7424843,        -361292666,     -361292666,
    1477675302,     1477675302,     1477675302,     533220056,
    90314833,       90314833,       90314833,       -1338447649,
    -1338447649,    -634610873,     -13829834,      -13829834
};

const float DataSet_1_32f::inputs::inputA[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.8198000000E+02f,
    1.4141870000E+04f,  1.0948740000E+04f,  4.1870000000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.2387840000E+04f, 1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4120000000E+01f,
    1.9489100000E+03f,  9.0800002300E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1398119700E+05f,
    1.8416360000E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  -9.4871200000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::inputs::inputB[32] = {
    9.0871183700E+04f,  1.9312000000E+02f,  -8.7591320000E+04f, 8.7123669530E+06f,
    7.3811830000E+03f,  9.5651130000E+04f,  -9.6412000000E+02f, 9.8713865130E+04f,
    1.1194000000E+02f,  9.9956100000E+03f,  9.7591200000E+02f,  7.5839186300E+04f,
    9.4980000000E+01f,  8.7419400000E+03f,  9.9994400000E+03f,  1.0000000010E+04f,
    1.0000000000E-06f,  1.9443700000E+02f,  4.9179100000E+03f,  9.7512914870E+04f,
    8.8813112300E+05f,  4.7118470000E+02f,  9.8512139999E+06f,  -1.6538714700E+05f,
    3.3667132000E+04f,  7.1598231000E+04f,  -9.8519900000E+03f, 9.9135120000E+03f,
    9.4138100000E+01f,  9.8411200000E+03f,  9.8131000000E+02f,  7.8132947000E+04f
};

const float DataSet_1_32f::inputs::inputC[32] = {
    -4.2808595247E+04f, -4.4338975338E+04f, -6.9959671308E+03f, -4.2651765417E+04f,
    -7.9861351250E+03f, -3.6324841428E+04f, 2.7569139541E+04f,  -4.7837104197E+04f,
    1.1112896272E+04f,  4.0763696870E+04f,  -2.3742677674E+04f, 2.0170781945E+03f,
    1.1706333850E+04f,  2.4637683349E+04f,  3.4588091506E+04f,  -8.8567795934E+03f,
    3.3201122728E+04f,  3.3075163475E+04f,  -1.4310404474E+04f, 3.5759618137E+04f,
    -1.3646099372E+04f, 4.2715445810E+04f,  -3.9904106839E+04f, 5.2039154812E+03f,
    -4.5974225156E+04f, -4.5716431746E+04f, -1.3017316543E+04f, 4.7579390216E+04f,
    2.4206730272E+04f,  -9.3265325185E+03f, -2.3812337455E+04f, -4.6669351587E+04f
};

const float DataSet_1_32f::inputs::scalarA = -100.0234f;

const bool DataSet_1_32f::inputs::maskA[32] = {
    true,   false,  false,  true,   // 4
    false,  true,   true,   false,  // 8

    false,  true,   true,   false,  
    true,   false,  false,  true,   // 16
    
    false,  true,   true,   false,
    true,   false,  false,  true,
    true,   false,  false,  true,
    false,  true,   true,   false,  // 32
};

const float DataSet_1_32f::outputs::ADDV[32] = {
    9.0872183700E+04f,  1.4361200000E+03f,  -8.7610443000E+04f, 8.7117849730E+06f,
    2.1523053000E+04f,  1.0659987000E+05f,  -9.6370130000E+02f, 9.8713866430E+04f,
    1.1506000000E+02f,  -2.3922300000E+03f, 1.0981420000E+03f,  7.5938484400E+04f,
    9.8070000000E+01f,  8.8310630000E+03f,  1.0083880000E+04f,  9.9258800100E+03f,
    1.9489100010E+03f,  1.1024370230E+03f,  5.0096700000E+03f,  1.8874904687E+05f,
    9.8804412300E+05f,  1.3851031000E+03f,  9.7162958680E+06f,  -9.7936834400E+05f,
    3.3667316164E+04f,  7.5790172000E+04f,  -3.7795300000E+01f, 8.1565803293E+06f,
    6.1903138100E+04f,  9.9945444000E+05f,  -9.3889890000E+04f, 1.7813294699E+05f
}; 

const float DataSet_1_32f::outputs::MADDV[32] = {
    9.0872183700E+04f,  1.2430000000E+03f,  -1.9123000000E+01f, 8.7117849730E+06f,
    1.4141870000E+04f,  1.0659987000E+05f,  -9.6370130000E+02f, 1.3000000000E-03f,
    3.1200000000E+00f,  -2.3922300000E+03f, 1.0981420000E+03f,  9.9298100000E+01f,
    9.8070000000E+01f,  8.9123000000E+01f,  8.4440000000E+01f,  9.9258800100E+03f,
    1.9489100000E+03f,  1.1024370230E+03f,  5.0096700000E+03f,  9.1236132000E+04f,
    9.8804412300E+05f,  9.1391840000E+02f,  -1.3491813187E+05f, -9.7936834400E+05f,
    3.3667316164E+04f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1565803293E+06f,
    6.1809000000E+04f,  9.9945444000E+05f,  -9.3889890000E+04f, 9.9999999990E+04f

};

const float DataSet_1_32f::outputs::ADDS[32] = {
    -9.9023400000E+01f, 1.1429766000E+03f,  -1.1914640000E+02f, -6.8200340000E+02f,
    1.4041846600E+04f,  1.0848716600E+04f,  -9.9604700000E+01f, -1.0002210000E+02f,
    -9.6903400000E+01f, -1.2487863400E+04f, 2.2206600000E+01f,  -7.2530000000E-01f,
    -9.6933400000E+01f, -1.0900400000E+01f, -1.5583400000E+01f, -1.7414340000E+02f,
    1.8488866000E+03f,  8.0797662300E+02f,  -8.2634000000E+00f, 9.1136108600E+04f,
    9.9812976600E+04f,  8.1389500000E+02f,  -1.3501815527E+05f, -8.1408122040E+05f,
    -9.9839236400E+01f, 4.0919176000E+03f,  9.7141713000E+03f,  8.1465667939E+06f,
    6.1708976600E+04f,  9.8951329660E+05f,  -9.4971223400E+04f, 9.9899976590E+04f
};

const float DataSet_1_32f::outputs::MADDS[32] = {
    -9.9023400000E+01f, 1.2430000000E+03f,  -1.9123000000E+01f, -6.8200340000E+02f,
    1.4141870000E+04f,  1.0848716600E+04f,  -9.9604700000E+01f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2487863400E+04f, 2.2206600000E+01f,  9.9298100000E+01f,
    -9.6933400000E+01f, 8.9123000000E+01f,  8.4440000000E+01f,  -1.7414340000E+02f,
    1.9489100000E+03f,  8.0797662300E+02f,  -8.2634000000E+00f, 9.1236132000E+04f,
    9.9812976600E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1408122040E+05f,
    -9.9839236400E+01f, 4.1919410000E+03f,  9.8141947000E+03f,  8.1465667939E+06f,
    6.1809000000E+04f,  9.8951329660E+05f,  -9.4971223400E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::POSTPREFINC[32] = {
    2.0000000000E+00f,  1.2440000000E+03f,  -1.8123000000E+01f, -5.8098000000E+02f,
    1.4142870000E+04f,  1.0949740000E+04f,  1.4187000000E+00f,  1.0013000000E+00f,
    4.1200000000E+00f,  -1.2386840000E+04f, 1.2323000000E+02f,  1.0029810000E+02f,
    4.0900000000E+00f,  9.0123000000E+01f,  8.5440000000E+01f,  -7.3120000000E+01f,
    1.9499100000E+03f,  9.0900002300E+02f,  9.2760000000E+01f,  9.1237132000E+04f,
    9.9914000000E+04f,  9.1491840000E+02f,  -1.3491713187E+05f, -8.1398019700E+05f,
    1.1841636000E+00f,  4.1929410000E+03f,  9.8151947000E+03f,  8.1466678173E+06f,
    6.1810000000E+04f,  9.8961432000E+05f,  -9.4870200000E+04f, 1.0000099999E+05f
};

const float DataSet_1_32f::outputs::MPOSTPREFINC[32] = {
    2.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.8098000000E+02f,
    1.4141870000E+04f,  1.0949740000E+04f,  1.4187000000E+00f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.2386840000E+04f, 1.2323000000E+02f,  9.9298100000E+01f,
    4.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.3120000000E+01f,
    1.9489100000E+03f,  9.0900002300E+02f,  9.2760000000E+01f,  9.1236132000E+04f,
    9.9914000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1398019700E+05f,
    1.1841636000E+00f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466678173E+06f,
    6.1809000000E+04f,  9.8961432000E+05f,  -9.4870200000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::SUBV[32] = {
    -9.0870183700E+04f, 1.0498800000E+03f,  8.7572197000E+04f,  -8.7129489330E+06f,
    6.7606870000E+03f,  -8.4702390000E+04f, 9.6453870000E+02f,  -9.8713863830E+04f,
    -1.0882000000E+02f, -2.2383450000E+04f, -8.5368200000E+02f, -7.5739888200E+04f,
    -9.1890000000E+01f, -8.6528170000E+03f, -9.9150000000E+03f, -1.0074120010E+04f,
    1.9489099990E+03f,  7.1356302300E+02f,  -4.8261500000E+03f, -6.2767828700E+03f,
    -7.8821812300E+05f, 4.4273370000E+02f,  -9.9861321318E+06f, -6.4859405000E+05f,
    -3.3666947836E+04f, -6.7406290000E+04f, 1.9666184700E+04f,  8.1367533053E+06f,
    6.1714861900E+04f,  9.7977220000E+05f,  -9.5852510000E+04f, 2.1867052990E+04f
};

const float DataSet_1_32f::outputs::MSUBV[32] = {
    -9.0870183700E+04f, 1.2430000000E+03f,  -1.9123000000E+01f, -8.7129489330E+06f,
    1.4141870000E+04f,  -8.4702390000E+04f, 9.6453870000E+02f,  1.3000000000E-03f,
    3.1200000000E+00f,  -2.2383450000E+04f, -8.5368200000E+02f, 9.9298100000E+01f,
    -9.1890000000E+01f, 8.9123000000E+01f,  8.4440000000E+01f,  -1.0074120010E+04f,
    1.9489100000E+03f,  7.1356302300E+02f,  -4.8261500000E+03f, 9.1236132000E+04f,
    -7.8821812300E+05f, 9.1391840000E+02f,  -1.3491813187E+05f, -6.4859405000E+05f,
    -3.3666947836E+04f, 4.1919410000E+03f,  9.8141947000E+03f,  8.1367533053E+06f,
    6.1809000000E+04f,  9.7977220000E+05f,  -9.5852510000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::SUBS[32] = {
    1.0102340000E+02f,  1.3430234000E+03f,  8.0900400000E+01f,  -4.8195660000E+02f,
    1.4241893400E+04f,  1.1048763400E+04f,  1.0044210000E+02f,  1.0002470000E+02f,
    1.0314340000E+02f,  -1.2287816600E+04f, 2.2225340000E+02f,  1.9932150000E+02f,
    1.0311340000E+02f,  1.8914640000E+02f,  1.8446340000E+02f,  2.5903400000E+01f,
    2.0489334000E+03f,  1.0080234230E+03f,  1.9178340000E+02f,  9.1336155400E+04f,
    1.0001302340E+05f,  1.0139418000E+03f,  -1.3481810847E+05f, -8.1388117360E+05f,
    1.0020756360E+02f,  4.2919644000E+03f,  9.9142181000E+03f,  8.1467668407E+06f,
    6.1909023400E+04f,  9.8971334340E+05f,  -9.4771176600E+04f, 1.0010002339E+05f
};

const float DataSet_1_32f::outputs::MSUBS[32] = {
    1.0102340000E+02f,  1.2430000000E+03f,  -1.9123000000E+01f, -4.8195660000E+02f,
    1.4141870000E+04f,  1.1048763400E+04f,  1.0044210000E+02f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.2287816600E+04f, 2.2225340000E+02f,  9.9298100000E+01f,
    1.0311340000E+02f,  8.9123000000E+01f,  8.4440000000E+01f,  2.5903400000E+01f,
    1.9489100000E+03f,  1.0080234230E+03f,  1.9178340000E+02f,  9.1236132000E+04f,
    1.0001302340E+05f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1388117360E+05f,
    1.0020756360E+02f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1467668407E+06f,
    6.1809000000E+04f,  9.8971334340E+05f,  -9.4771176600E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::SUBFROMV[32] = {
    9.0870183700E+04f,  -1.0498800000E+03f, -8.7572197000E+04f, 8.7129489330E+06f,
    -6.7606870000E+03f, 8.4702390000E+04f,  -9.6453870000E+02f, 9.8713863830E+04f,
    1.0882000000E+02f,  2.2383450000E+04f,  8.5368200000E+02f,  7.5739888200E+04f,
    9.1890000000E+01f,  8.6528170000E+03f,  9.9150000000E+03f,  1.0074120010E+04f,
    -1.9489099990E+03f, -7.1356302300E+02f, 4.8261500000E+03f,  6.2767828700E+03f,
    7.8821812300E+05f,  -4.4273370000E+02f, 9.9861321318E+06f,  6.4859405000E+05f,
    3.3666947836E+04f,  6.7406290000E+04f,  -1.9666184700E+04f, -8.1367533053E+06f,
    -6.1714861900E+04f, -9.7977220000E+05f, 9.5852510000E+04f,  -2.1867052990E+04f
};

const float DataSet_1_32f::outputs::MSUBFROMV[32] = {
    9.0870183700E+04f,  1.9312000000E+02f,  -8.7591320000E+04f, 8.7129489330E+06f,
    7.3811830000E+03f,  8.4702390000E+04f,  -9.6453870000E+02f, 9.8713865130E+04f,
    1.1194000000E+02f,  2.2383450000E+04f,  8.5368200000E+02f,  7.5839186300E+04f,
    9.1890000000E+01f,  8.7419400000E+03f,  9.9994400000E+03f,  1.0074120010E+04f,
    1.0000000000E-06f,  -7.1356302300E+02f, 4.8261500000E+03f,  9.7512914870E+04f,
    7.8821812300E+05f,  4.7118470000E+02f,  9.8512139999E+06f,  6.4859405000E+05f,
    3.3666947836E+04f,  7.1598231000E+04f,  -9.8519900000E+03f, -8.1367533053E+06f,
    9.4138100000E+01f,  -9.7977220000E+05f, 9.5852510000E+04f,  7.8132947000E+04f
};

const float DataSet_1_32f::outputs::SUBFROMS[32] = {
    -1.0102340000E+02f, -1.3430234000E+03f, -8.0900400000E+01f, 4.8195660000E+02f,
    -1.4241893400E+04f, -1.1048763400E+04f, -1.0044210000E+02f, -1.0002470000E+02f,
    -1.0314340000E+02f, 1.2287816600E+04f,  -2.2225340000E+02f, -1.9932150000E+02f,
    -1.0311340000E+02f, -1.8914640000E+02f, -1.8446340000E+02f, -2.5903400000E+01f,
    -2.0489334000E+03f, -1.0080234230E+03f, -1.9178340000E+02f, -9.1336155400E+04f,
    -1.0001302340E+05f, -1.0139418000E+03f, 1.3481810847E+05f,  8.1388117360E+05f,
    -1.0020756360E+02f, -4.2919644000E+03f, -9.9142181000E+03f, -8.1467668407E+06f,
    -6.1909023400E+04f, -9.8971334340E+05f, 9.4771176600E+04f,  -1.0010002339E+05f
};

const float DataSet_1_32f::outputs::MSUBFROMS[32] = {
    -1.0102340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, 4.8195660000E+02f,
    -1.0002340000E+02f, -1.1048763400E+04f, -1.0044210000E+02f, -1.0002340000E+02f,
    -1.0002340000E+02f, 1.2287816600E+04f,  -2.2225340000E+02f, -1.0002340000E+02f,
    -1.0311340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -2.5903400000E+01f,
    -1.0002340000E+02f, -1.0080234230E+03f, -1.9178340000E+02f, -1.0002340000E+02f,
    -1.0001302340E+05f, -1.0002340000E+02f, -1.0002340000E+02f, 8.1388117360E+05f,
    -1.0020756360E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -8.1467668407E+06f,
    -1.0002340000E+02f, -9.8971334340E+05f, 9.4771176600E+04f, -1.0002340000E+02f
};

const float DataSet_1_32f::outputs::POSTPREFDEC[32] = {
    0.0000000000E+00f,  1.2420000000E+03f,  -2.0123000000E+01f, -5.8298000000E+02f,
    1.4140870000E+04f,  1.0947740000E+04f,  -5.8130000000E-01f, -9.9870000000E-01f,
    2.1200000000E+00f,  -1.2388840000E+04f, 1.2123000000E+02f,  9.8298100000E+01f,
    2.0900000000E+00f,  8.8123000000E+01f,  8.3440000000E+01f,  -7.5120000000E+01f,
    1.9479100000E+03f,  9.0700002300E+02f,  9.0760000000E+01f,  9.1235132000E+04f,
    9.9912000000E+04f,  9.1291840000E+02f,  -1.3491913187E+05f, -8.1398219700E+05f,
    -8.1583640000E-01f, 4.1909410000E+03f,  9.8131947000E+03f,  8.1466658173E+06f,
    6.1808000000E+04f,  9.8961232000E+05f,  -9.4872200000E+04f, 9.9998999990E+04f
};

const float DataSet_1_32f::outputs::MPOSTPREFDEC[32] = {
    0.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.8298000000E+02f,
    1.4141870000E+04f,  1.0947740000E+04f,  -5.8130000000E-01f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2388840000E+04f, 1.2123000000E+02f,  9.9298100000E+01f,
    2.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.5120000000E+01f,
    1.9489100000E+03f,  9.0700002300E+02f,  9.0760000000E+01f,  9.1236132000E+04f,
    9.9912000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1398219700E+05f,
    -8.1583640000E-01f, 4.1919410000E+03f,  9.8141947000E+03f,  8.1466658173E+06f,
    6.1809000000E+04f,  9.8961232000E+05f,  -9.4872200000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MULV[32] = {
    9.0871183700E+04f,  2.4004816000E+05f,  1.6750088124E+06f,  -5.0704233193E+09f,
    1.0438373043E+08f,  1.0472593531E+09f,  -4.0367704400E+02f, 1.2832802467E+02f,
    3.4925280000E+02f,  -1.2382401738E+08f, 1.1928572376E+05f,  7.5306871051E+06f,
    2.9348820000E+02f,  7.7910791862E+05f,  8.4435271360E+05f,  -7.4120000074E+05f,
    1.9489100000E-03f,  1.7654880047E+05f,  4.5126742160E+05f,  8.8967011728E+09f,
    8.8735844892E+10f,  4.3062436713E+05f,  -1.3291073895E+12f, 1.3462202788E+11f,
    6.2002602308E+03f,  3.0013556006E+08f,  -9.6689348042E+07f, 8.0762079253E+10f,
    5.8185818229E+06f,  9.7389034357E+09f,  -9.3098057272E+07f, 7.8132946992E+09f
};

const float DataSet_1_32f::outputs::MMULV[32] = {
    9.0871183700E+04f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.0704233193E+09f,
    1.4141870000E+04f,  1.0472593531E+09f,  -4.0367704400E+02f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2382401738E+08f, 1.1928572376E+05f,  9.9298100000E+01f,
    2.9348820000E+02f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4120000074E+05f,
    1.9489100000E+03f,  1.7654880047E+05f,  4.5126742160E+05f,  9.1236132000E+04f,
    8.8735844892E+10f,  9.1391840000E+02f,  -1.3491813187E+05f, 1.3462202788E+11f,
    6.2002602308E+03f,  4.1919410000E+03f,  9.8141947000E+03f,  8.0762079253E+10f,
    6.1809000000E+04f,  9.7389034357E+09f,  -9.3098057272E+07f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MULS[32] = {
    -1.0002340000E+02f, -1.2432908620E+05f, 1.9127474782E+03f,  5.8211618332E+04f,
    -1.4145179198E+06f, -1.0951302005E+06f, -4.1879797580E+01f, -1.3003042000E-01f,
    -3.1207300800E+02f, 1.2390738755E+06f,  -1.2225860182E+04f, -9.9321335755E+03f,
    -3.0907230600E+02f, -8.9143854782E+03f, -8.4459758960E+03f, 7.4137344080E+03f,
    -1.9493660449E+05f, -9.0821249501E+04f, -9.1781471840E+03f, -9.1257481255E+06f,
    -9.9936379642E+06f, -9.1413225691E+04f, 1.3494970271E+07f,  8.1417166860E+07f,
    -1.8420669428E+01f, -4.1929219142E+05f, -9.8164912216E+05f, -8.1485731373E+08f,
    -6.1823463306E+06f, -9.8984488952E+07f, 9.4893399861E+06f,  -1.0002339999E+07f
};

const float DataSet_1_32f::outputs::MMULS[32] = {
    -1.0002340000E+02f, 1.2430000000E+03f,  -1.9123000000E+01f, 5.8211618332E+04f,
    1.4141870000E+04f,  -1.0951302005E+06f, -4.1879797580E+01f, 1.3000000000E-03f,
    3.1200000000E+00f,  1.2390738755E+06f,  -1.2225860182E+04f, 9.9298100000E+01f,
    -3.0907230600E+02f, 8.9123000000E+01f,  8.4440000000E+01f,  7.4137344080E+03f,
    1.9489100000E+03f,  -9.0821249501E+04f, -9.1781471840E+03f, 9.1236132000E+04f,
    -9.9936379642E+06f, 9.1391840000E+02f,  -1.3491813187E+05f, 8.1417166860E+07f,
    -1.8420669428E+01f, 4.1919410000E+03f,  9.8141947000E+03f,  -8.1485731373E+08f,
    6.1809000000E+04f,  -9.8984488952E+07f, 9.4893399861E+06f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::DIVV[32] = {
    1.1004588686E-05f,  6.4364125932E+00f,  2.1832071945E-04f,  -6.6799298416E-05f,
    1.9159354266E+00f,  1.1446534923E-01f,  -4.3428203958E-04f, 1.3169375936E-08f,
    2.7872074326E-02f,  -1.2393280650E+00f, 1.2524694850E-01f,  1.3093244383E-03f,
    3.2533164877E-02f,  1.0194876652E-02f,  8.4444728905E-03f,  -7.4119999926E-03f,
    1.9489100000E+09f,  4.6698931942E+00f,  1.8658332503E-02f,  9.3563126609E-01f,
    1.1249802806E-01f,  1.9396181582E+00f,  -1.3695584308E-02f, 4.9216714344E+00f,
    5.4701303336E-06f,  5.8548108542E-02f,  -9.9616368876E-01f, 8.2177404106E+02f,
    6.5657794241E+02f,  1.0055901361E+02f,  -9.6678113950E+01f, 1.2798698095E+00f
};

const float DataSet_1_32f::outputs::MDIVV[32] = {
    1.1004588686E-05f,  1.2430000000E+03f,  -1.9123000000E+01f, -6.6799298416E-05f,
    1.4141870000E+04f,  1.1446534923E-01f,  -4.3428203958E-04f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2393280650E+00f, 1.2524694850E-01f,  9.9298100000E+01f,
    3.2533164877E-02f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4119999926E-03f,
    1.9489100000E+03f,  4.6698931942E+00f,  1.8658332503E-02f,  9.1236132000E+04f,
    1.1249802806E-01f,  9.1391840000E+02f,  -1.3491813187E+05f, 4.9216714344E+00f,
    5.4701303336E-06f,  4.1919410000E+03f,  9.8141947000E+03f,  8.2177404106E+02f,
    6.1809000000E+04f,  1.0055901361E+02f,  -9.6678113950E+01f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::DIVS[32] = {
    -9.9976605474E-03f, -1.2427092060E+01f, 1.9118526265E-01f,  5.8184384854E+00f,
    -1.4138561577E+02f, -1.0946178594E+02f, -4.1860204712E-03f, -1.2996958712E-05f,
    -3.1192700908E-02f, 1.2384941924E+02f,  -1.2220140487E+00f, -9.9274869680E-01f,
    -3.0892771092E-02f, -8.9102150097E-01f, -8.4420245663E-01f, 7.4102659978E-01f,
    -1.9484540617E+01f, -9.0778760070E+00f, -9.1738533183E-01f, -9.1214787740E+02f,
    -9.9889625828E+02f, -9.1370459313E+00f, 1.3488656841E+03f,  8.1379076996E+03f,
    -1.8412051580E-03f, -4.1909603153E+01f, -9.8118987157E+01f, -8.1447609432E+04f,
    -6.1794540078E+02f, -9.8938180466E+03f, 9.4849005333E+02f,  -9.9976605464E+02f
};

const float DataSet_1_32f::outputs::MDIVS[32] = {
    -9.9976605474E-03f, 1.2430000000E+03f,  -1.9123000000E+01f, 5.8184384854E+00f,
    1.4141870000E+04f,  -1.0946178594E+02f, -4.1860204712E-03f, 1.3000000000E-03f,
    3.1200000000E+00f,  1.2384941924E+02f,  -1.2220140487E+00f, 9.9298100000E+01f,
    -3.0892771092E-02f, 8.9123000000E+01f,  8.4440000000E+01f,  7.4102659978E-01f,
    1.9489100000E+03f,  -9.0778760070E+00f, -9.1738533183E-01f, 9.1236132000E+04f,
    -9.9889625828E+02f, 9.1391840000E+02f,  -1.3491813187E+05f, 8.1379076996E+03f,
    -1.8412051580E-03f, 4.1919410000E+03f,  9.8141947000E+03f,  -8.1447609432E+04f,
    6.1809000000E+04f,  -9.8938180466E+03f, 9.4849005333E+02f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::RCP[32] = {
    1.0000000000E+00f,  8.0450522928E-04f,  -5.2293050254E-02f, -1.7182721056E-03f,
    7.0712006262E-05f,  9.1334710661E-05f,  2.3883448770E+00f,  7.6923076923E+02f,
    3.2051282051E-01f,  -8.0724323207E-05f, 8.1812975538E-03f,  1.0070686146E-02f,
    3.2362459547E-01f,  1.1220448145E-02f,  1.1842728565E-02f,  -1.3491635186E-02f,
    5.1310732666E-04f,  1.1013215580E-03f,  1.0897994769E-02f,  1.0960569876E-05f,
    1.0008707576E-05f,  1.0941895907E-03f,  -7.4119022117E-06f, -1.2285296069E-06f,
    5.4299546707E+00f,  2.3855297582E-04f,  1.0189323022E-04f,  1.2274958857E-07f,
    1.6178873627E-05f,  1.0104956954E-06f,  -1.0540606633E-05f, 1.0000000001E-05f
};

const float DataSet_1_32f::outputs::MRCP[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -1.7182721056E-03f,
    1.4141870000E+04f,  9.1334710661E-05f,  2.3883448770E+00f,  1.3000000000E-03f,
    3.1200000000E+00f,  -8.0724323207E-05f, 8.1812975538E-03f,  9.9298100000E+01f,
    3.2362459547E-01f,  8.9123000000E+01f,  8.4440000000E+01f,  -1.3491635186E-02f,
    1.9489100000E+03f,  1.1013215580E-03f,  1.0897994769E-02f,  9.1236132000E+04f,
    1.0008707576E-05f,  9.1391840000E+02f,  -1.3491813187E+05f, -1.2285296069E-06f,
    5.4299546707E+00f,  4.1919410000E+03f,  9.8141947000E+03f,  1.2274958857E-07f,
    6.1809000000E+04f,  1.0104956954E-06f,  -1.0540606633E-05f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::RCPS[32] = {
    -1.0002340000E+02f, -8.0469348351E-02f, 5.2305286827E+00f,  1.7186741812E-01f,
    -7.0728552872E-03f, -9.1356082983E-03f, -2.3889037497E+02f, -7.6941076923E+04f,
    -3.2058782051E+01f, 8.0743212699E-03f,  -8.1832119774E-01f, -1.0073042687E+00f,
    -3.2370032362E+01f, -1.1223073730E+00f, -1.1845499763E+00f, 1.3494792229E+00f,
    -5.1322739377E-02f, -1.1015792673E-01f, -1.0900544900E+00f, -1.0963134649E-03f,
    -1.0011049613E-03f, -1.0944456310E-01f, 7.4136365968E-04f,  1.2288170829E-04f,
    -5.4312252801E+02f, -2.3860879721E-02f, -1.0191707324E-02f, -1.2277831197E-05f,
    -1.6182659483E-03f, -1.0107321514E-04f, 1.0543073135E-03f,  -1.0002340001E-03f
};

const float DataSet_1_32f::outputs::MRCPS[32] = {
    -1.0002340000E+02f, 1.2430000000E+03f,  -1.9123000000E+01f, 1.7186741812E-01f,
    1.4141870000E+04f,  -9.1356082983E-03f, -2.3889037497E+02f, 1.3000000000E-03f,
    3.1200000000E+00f,  8.0743212699E-03f,  -8.1832119774E-01f, 9.9298100000E+01f,
    -3.2370032362E+01f, 8.9123000000E+01f,  8.4440000000E+01f,  1.3494792229E+00f,
    1.9489100000E+03f,  -1.1015792673E-01f, -1.0900544900E+00f, 9.1236132000E+04f,
    -1.0011049613E-03f, 9.1391840000E+02f,  -1.3491813187E+05f, 1.2288170829E-04f,
    -5.4312252801E+02f, 4.1919410000E+03f,  9.8141947000E+03f,  -1.2277831197E-05f,
    6.1809000000E+04f,  -1.0107321514E-04f, 1.0543073135E-03f,  9.9999999990E+04f
};

const bool DataSet_1_32f::outputs::CMPEQV[32] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};

const bool DataSet_1_32f::outputs::CMPEQS[32] = {
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  false,  false
};

const bool DataSet_1_32f::outputs::CMPNEV[32] = {
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};

const bool DataSet_1_32f::outputs::CMPNES[32] = {
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   true,   true
};

const bool DataSet_1_32f::outputs::CMPGTV[32] = {
    false,  true,   true,   false,  true,   false,  true,   false,
    false,  false,  false,  false,  false,  false,  false,  false,
    true,   true,   false,  false,  false,  true,   false,  false,
    false,  false,  true,   true,   true,   true,   false,  true
};

const bool DataSet_1_32f::outputs::CMPGTS[32] = {
    true,   true,   true,   false,  true,   true,   true,   true,
    true,   false,  true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   false,  false,
    true,   true,   true,   true,   true,   true,   false,  true
};

const bool DataSet_1_32f::outputs::CMPLTV[32] = {
    true,   false,  false,  true,   false,  true,   false,  true,
    true,   true,   true,   true,   true,   true,   true,   true,
    false,  false,  true,   true,   true,   false,  true,   true,
    true,   true,   false,  false,  false,  false,  true,   false
};

const bool DataSet_1_32f::outputs::CMPLTS[32] = {
    false,  false,  false,  true,   false,  false,  false,  false,
    false,  true,   false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  true,   true,
    false,  false,  false,  false,  false,  false,  true,   false
};

const bool DataSet_1_32f::outputs::CMPGEV[32] = {
    false,  true,   true,   false,  true,   false,  true,   false,
    false,  false,  false,  false,  false,  false,  false,  false,
    true,   true,   false,  false,  false,  true,   false,  false,
    false,  false,  true,   true,   true,   true,   false,  true
};

const bool DataSet_1_32f::outputs::CMPGES[32] = {
    true,   true,   true,   false,  true,   true,   true,   true,
    true,   false,  true,   true,   true,   true,   true,   true,
    true,   true,   true,   true,   true,   true,   false,  false,
    true,   true,   true,   true,   true,   true,   false,  true
};

const bool DataSet_1_32f::outputs::CMPLEV[32] = {
    true,   false,  false,  true,   false,  true,   false,  true,
    true,   true,   true,   true,   true,   true,   true,   true,
    false,  false,  true,   true,   true,   false,  true,   true,
    true,   true,   false,  false,  false,  false,  true,   false
};

const bool DataSet_1_32f::outputs::CMPLES[32] = {
    false,  false,  false,  true,   false,  false,  false,  false,
    false,  true,   false,  false,  false,  false,  false,  false,
    false,  false,  false,  false,  false,  false,  true,   true,
    false,  false,  false,  false,  false,  false,  true,   false
};

const bool DataSet_1_32f::outputs::CMPEV = false;
const bool DataSet_1_32f::outputs::CMPES = false;

const float DataSet_1_32f::outputs::HADD[32] = {
    1.0000000000E+00f,  1.2440000000E+03f,  1.2248770000E+03f,  6.4289700000E+02f,
    1.4784767000E+04f,  2.5733507000E+04f,  2.5733925700E+04f,  2.5733927000E+04f,
    2.5737047000E+04f,  1.3349207000E+04f,  1.3471437000E+04f,  1.3570735100E+04f,
    1.3573825100E+04f,  1.3662948100E+04f,  1.3747388100E+04f,  1.3673268100E+04f,
    1.5622178100E+04f,  1.6530178123E+04f,  1.6621938123E+04f,  1.0785807012E+05f,
    2.0777107012E+05f,  2.0868498852E+05f,  7.3766856653E+04f,  -7.4021434035E+05f,
    -7.4021415618E+05f, -7.3602221518E+05f, -7.2620802048E+05f, 7.4204587968E+06f,
    7.4822677968E+06f,  8.4718811168E+06f,  8.3770099168E+06f,  8.4770099168E+06f
};

const float DataSet_1_32f::outputs::MHADD[32] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

const float DataSet_1_32f::outputs::HMUL[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -2.3769889000E+04f, 1.3833600000E+07f,
    1.9563297284E+11f,  2.1419345550E+15f,  8.9682799818E+14f,  1.1658763976E+12f,
    3.6375343606E+12f,  -4.5061193654E+16f, -5.5078297003E+18f, -5.4691702436E+20f,
    -1.6899736053E+21f, -1.5061551762E+23f, -1.2717974308E+25f, 9.4265625572E+26f,
    1.8371522033E+30f,  1.6681342429E+33f,  1.5306799813E+35f,  std::numeric_limits<float>::infinity(),
    std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity(),    std::numeric_limits<float>::infinity(),
    std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity(),     std::numeric_limits<float>::infinity(),
    std::numeric_limits<float>::infinity(), std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity(),    -std::numeric_limits<float>::infinity()
};

const float DataSet_1_32f::outputs::MHMUL[32] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

const float DataSet_1_32f::outputs::FMULADDV[32] = {
    4.8062588453E+04f,  1.9570918466E+05f,  1.6680128452E+06f,  -5.0704659711E+09f,
    1.0437574430E+08f,  1.0472230282E+09f,  2.7165462497E+04f,  -4.7708776172E+04f,
    1.1462149072E+04f,  -1.2378325369E+08f, 9.5543046086E+04f,  7.5327041833E+06f,
    1.1999822050E+04f,  8.0374560197E+05f,  8.7894080511E+05f,  -7.5005678033E+05f,
    3.3201124677E+04f,  2.0962396395E+05f,  4.3695701713E+05f,  8.8967369324E+09f,
    8.8735831246E+10f,  4.7333981294E+05f,  -1.3291074294E+12f, 1.3462203309E+11f,
    -3.9773964926E+04f, 3.0008984362E+08f,  -9.6702365359E+07f, 8.0762126833E+10f,
    5.8427885532E+06f,  9.7388941092E+09f,  -9.3121869609E+07f, 7.8132480299E+09f
};

const float DataSet_1_32f::outputs::MFMULADD[32] = {
    4.8062588453E+04f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.0704659711E+09f,
    1.4141870000E+04f,  1.0472230282E+09f,  2.7165462497E+04f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.2378325369E+08f, 9.5543046086E+04f,  9.9298100000E+01f,
    1.1999822050E+04f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.5005678033E+05f,
    1.9489100000E+03f,  2.0962396395E+05f,  4.3695701713E+05f,  9.1236132000E+04f,
    8.8735831246E+10f,  9.1391840000E+02f,  -1.3491813187E+05f, 1.3462203309E+11f,
    -3.9773964926E+04f, 4.1919410000E+03f,  9.8141947000E+03f,  8.0762126833E+10f,
    6.1809000000E+04f,  9.7388941092E+09f,  -9.3121869609E+07f, 9.9999999990E+04f,
};

const float DataSet_1_32f::outputs::FMULSUBV[32] = {
    1.3367977895E+05f,  2.8438713534E+05f,  1.6820047795E+06f,  -5.0703806675E+09f,
    1.0439171657E+08f,  1.0472956779E+09f,  -2.7972816585E+04f, 4.7965432221E+04f,
    -1.0763643472E+04f, -1.2386478108E+08f, 1.4302840143E+05f,  7.5286700269E+06f,
    -1.1412845650E+04f, 7.5447023527E+05f,  8.0976462209E+05f,  -7.3234322115E+05f,
    -3.3201120779E+04f, 1.4347363700E+05f,  4.6557782607E+05f,  8.8966654132E+09f,
    8.8735858538E+10f,  3.8790892132E+05f,  -1.3291073496E+12f, 1.3462202268E+11f,
    5.2174485387E+04f,  3.0018127649E+08f,  -9.6676330726E+07f, 8.0762031674E+10f,
    5.7943750926E+06f,  9.7389127623E+09f,  -9.3074244935E+07f, 7.8133413686E+09f
};

const float DataSet_1_32f::outputs::MFMULSUBV[32] = {
    1.3367977895E+05f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.0703806675E+09f,
    1.4141870000E+04f,  1.0472956779E+09f,  -2.7972816585E+04f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2386478108E+08f, 1.4302840143E+05f,  9.9298100000E+01f,
    -1.1412845650E+04f, 8.9123000000E+01f,  8.4440000000E+01f,  -7.3234322115E+05f,
    1.9489100000E+03f,  1.4347363700E+05f,  4.6557782607E+05f,  9.1236132000E+04f,
    8.8735858538E+10f,  9.1391840000E+02f,  -1.3491813187E+05f, 1.3462202268E+11f,
    5.2174485387E+04f,  4.1919410000E+03f,  9.8141947000E+03f,  8.0762031674E+10f,
    6.1809000000E+04f,  9.7389127623E+09f,  -9.3074244935E+07f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::FADDMULV[32] = {
    -3.8901105312E+09f, -6.3676089262E+07f, 6.1291977954E+08f,  -3.7157300903E+11f,
    -1.7188600956E+08f, -3.8722233740E+09f, -2.6568415616E+07f, -4.7221855141E+09f,
    1.2786498451E+06f,  -9.7516138563E+07f, -2.6072831547E+07f, 1.5317386101E+08f,
    1.1480401606E+06f,  2.1757693383E+08f,  3.4878216417E+08f,  -8.7911331520E+07f,
    6.4706000129E+07f,  3.6463284757E+07f,  -7.1690403982E+07f, 6.7495938398E+09f,
    -1.3482948287E+10f, 5.9165296409E+07f,  -3.8772010839E+11f, -5.0965500872E+09f,
    -1.5478287737E+09f, -3.4648562253E+09f, 4.9199338393E+05f,  3.8808511832E+11f,
    1.4984725670E+09f,  -9.3214443354E+09f, 2.2357377443E+09f,  -8.3133491323E+09f
};

const float DataSet_1_32f::outputs::MFADDMULV[32] = {
    -3.8901105312E+09f, 1.2430000000E+03f,  -1.9123000000E+01f, -3.7157300903E+11f,
    1.4141870000E+04f,  -3.8722233740E+09f, -2.6568415616E+07f, 1.3000000000E-03f,
    3.1200000000E+00f,  -9.7516138563E+07f, -2.6072831547E+07f, 9.9298100000E+01f,
    1.1480401606E+06f,  8.9123000000E+01f,  8.4440000000E+01f,  -8.7911331520E+07f,
    1.9489100000E+03f,  3.6463284757E+07f,  -7.1690403982E+07f, 9.1236132000E+04f,
    -1.3482948287E+10f, 9.1391840000E+02f,  -1.3491813187E+05f, -5.0965500872E+09f,
    -1.5478287737E+09f, 4.1919410000E+03f,  9.8141947000E+03f,  3.8808511832E+11f,
    6.1809000000E+04f,  -9.3214443354E+09f, 2.2357377443E+09f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::FSUBMULV[32] = {
    3.8900249140E+09f,  -4.6550603427E+07f, -6.1265221178E+08f, 3.7162265398E+11f,
    -5.3991759920E+07f, 3.0768008854E+09f,  2.6591502013E+07f,  4.7221853897E+09f,
    -1.2093053724E+06f, -9.1243217070E+08f, 2.0268696562E+07f,  -1.5277327694E+08f,
    -1.0756950175E+06f, -2.1318536532E+08f, -3.4294092728E+08f, 8.9224260526E+07f,
    6.4706000063E+07f,  2.3601213636E+07f,  6.9064158553E+07f,  -2.2445535856E+08f,
    1.0756102833E+10f,  1.8911567371E+07f,  3.9848768349E+11f,  -3.3752286178E+09f,
    1.5478118402E+09f,  3.0815750560E+09f,  -2.5600095143E+08f, 3.8714176061E+11f,
    1.4939150158E+09f,  -9.1378772840E+09f, 2.2824723140E+09f,  -1.0205211842E+09f
};

const float DataSet_1_32f::outputs::MFSUBMULV[32] = {
    3.8900249140E+09f,  1.2430000000E+03f,  -1.9123000000E+01f, 3.7162265398E+11f,
    1.4141870000E+04f,  3.0768008854E+09f,  2.6591502013E+07f,  1.3000000000E-03f,
    3.1200000000E+00f,  -9.1243217070E+08f, 2.0268696562E+07f,  9.9298100000E+01f,
    -1.0756950175E+06f, 8.9123000000E+01f,  8.4440000000E+01f,  8.9224260526E+07f,
    1.9489100000E+03f,  2.3601213636E+07f,  6.9064158553E+07f,  9.1236132000E+04f,
    1.0756102833E+10f,  9.1391840000E+02f,  -1.3491813187E+05f, -3.3752286178E+09f,
    1.5478118402E+09f,  4.1919410000E+03f,  9.8141947000E+03f,  3.8714176061E+11f,
    6.1809000000E+04f,  -9.1378772840E+09f, 2.2824723140E+09f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MAXV[32] = {
    9.0871183700E+04f,  1.2430000000E+03f,  -1.9123000000E+01f, 8.7123669530E+06f,
    1.4141870000E+04f,  9.5651130000E+04f,  4.1870000000E-01f,  9.8713865130E+04f,
    1.1194000000E+02f,  9.9956100000E+03f,  9.7591200000E+02f,  7.5839186300E+04f,
    9.4980000000E+01f,  8.7419400000E+03f,  9.9994400000E+03f,  1.0000000010E+04f,
    1.9489100000E+03f,  9.0800002300E+02f,  4.9179100000E+03f,  9.7512914870E+04f,
    8.8813112300E+05f,  9.1391840000E+02f,  9.8512139999E+06f,  -1.6538714700E+05f,
    3.3667132000E+04f,  7.1598231000E+04f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  9.8131000000E+02f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MMAXV[32] = {
    9.0871183700E+04f,  1.2430000000E+03f,  -1.9123000000E+01f, 8.7123669530E+06f,
    1.4141870000E+04f,  9.5651130000E+04f,  4.1870000000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  9.9956100000E+03f,  9.7591200000E+02f,  9.9298100000E+01f,
    9.4980000000E+01f,  8.9123000000E+01f,  8.4440000000E+01f,  1.0000000010E+04f,
    1.9489100000E+03f,  9.0800002300E+02f,  4.9179100000E+03f,  9.1236132000E+04f,
    8.8813112300E+05f,  9.1391840000E+02f,  -1.3491813187E+05f, -1.6538714700E+05f,
    3.3667132000E+04f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  9.8131000000E+02f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MAXS[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -1.0002340000E+02f,
    1.4141870000E+04f,  1.0948740000E+04f,  4.1870000000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.0002340000E+02f, 1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4120000000E+01f,
    1.9489100000E+03f,  9.0800002300E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.0002340000E+02f, -1.0002340000E+02f,
    1.8416360000E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  -1.0002340000E+02f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MMAXS[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -1.0002340000E+02f,
    1.4141870000E+04f,  1.0948740000E+04f,  4.1870000000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.0002340000E+02f, 1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4120000000E+01f,
    1.9489100000E+03f,  9.0800002300E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -1.0002340000E+02f,
    1.8416360000E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  -1.0002340000E+02f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MINV[32] = {
    1.0000000000E+00f,  1.9312000000E+02f,  -8.7591320000E+04f, -5.8198000000E+02f,
    7.3811830000E+03f,  1.0948740000E+04f,  -9.6412000000E+02f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2387840000E+04f, 1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4120000000E+01f,
    1.0000000000E-06f,  1.9443700000E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  4.7118470000E+02f,  -1.3491813187E+05f, -8.1398119700E+05f,
    1.8416360000E-01f,  4.1919410000E+03f,  -9.8519900000E+03f, 9.9135120000E+03f,
    9.4138100000E+01f,  9.8411200000E+03f,  -9.4871200000E+04f, 7.8132947000E+04f
};

const float DataSet_1_32f::outputs::MMINV[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.8198000000E+02f,
    1.4141870000E+04f,  1.0948740000E+04f,  -9.6412000000E+02f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2387840000E+04f, 1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4120000000E+01f,
    1.9489100000E+03f,  1.9443700000E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1398119700E+05f,
    1.8416360000E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  9.9135120000E+03f,
    6.1809000000E+04f,  9.8411200000E+03f,  -9.4871200000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MINS[32] = {
    -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -5.8198000000E+02f,
    -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f,
    -1.0002340000E+02f, -1.2387840000E+04f, -1.0002340000E+02f, -1.0002340000E+02f,
    -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f,
    -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f,
    -1.0002340000E+02f, -1.0002340000E+02f, -1.3491813187E+05f, -8.1398119700E+05f,
    -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f, -1.0002340000E+02f,
    -1.0002340000E+02f, -1.0002340000E+02f, -9.4871200000E+04f, -1.0002340000E+02f
};

const float DataSet_1_32f::outputs::MMINS[32] = {
    -1.0002340000E+02f, 1.2430000000E+03f,  -1.9123000000E+01f, -5.8198000000E+02f,
    1.4141870000E+04f,  -1.0002340000E+02f, -1.0002340000E+02f, 1.3000000000E-03f,
    3.1200000000E+00f,  -1.2387840000E+04f, -1.0002340000E+02f, 9.9298100000E+01f,
    -1.0002340000E+02f, 8.9123000000E+01f,  8.4440000000E+01f,  -1.0002340000E+02f,
    1.9489100000E+03f,  -1.0002340000E+02f, -1.0002340000E+02f, 9.1236132000E+04f,
    -1.0002340000E+02f, 9.1391840000E+02f,  -1.3491813187E+05f, -8.1398119700E+05f,
    -1.0002340000E+02f, 4.1919410000E+03f,  9.8141947000E+03f,  -1.0002340000E+02f,
    6.1809000000E+04f,  -1.0002340000E+02f, -9.4871200000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::HMAX[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  1.2430000000E+03f,  1.2430000000E+03f,
    1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,
    1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,
    1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,
    1.4141870000E+04f,  1.4141870000E+04f,  1.4141870000E+04f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.9913000000E+04f,  9.9913000000E+04f,  9.9913000000E+04f,
    9.9913000000E+04f,  9.9913000000E+04f,  9.9913000000E+04f,  8.1466668173E+06f,
    8.1466668173E+06f,  8.1466668173E+06f,  8.1466668173E+06f,  8.1466668173E+06f
};

const float DataSet_1_32f::outputs::MHMAX[32] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

const float DataSet_1_32f::outputs::HMIN[32] = {
    1.0000000000E+00f,  1.0000000000E+00f,  -1.9123000000E+01f, -5.8198000000E+02f,
    -5.8198000000E+02f, -5.8198000000E+02f, -5.8198000000E+02f, -5.8198000000E+02f,
    -5.8198000000E+02f, -1.2387840000E+04f, -1.2387840000E+04f, -1.2387840000E+04f,
    -1.2387840000E+04f, -1.2387840000E+04f, -1.2387840000E+04f, -1.2387840000E+04f,
    -1.2387840000E+04f, -1.2387840000E+04f, -1.2387840000E+04f, -1.2387840000E+04f,
    -1.2387840000E+04f, -1.2387840000E+04f, -1.3491813187E+05f, -8.1398119700E+05f,
    -8.1398119700E+05f, -8.1398119700E+05f, -8.1398119700E+05f, -8.1398119700E+05f,
    -8.1398119700E+05f, -8.1398119700E+05f, -8.1398119700E+05f, -8.1398119700E+05f
};

const float DataSet_1_32f::outputs::MHMIN[32] = {
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f
};

const float DataSet_1_32f::outputs::NEG[32] = {
    -1.0000000000E+00f, -1.2430000000E+03f, 1.9123000000E+01f,  5.8198000000E+02f,
    -1.4141870000E+04f, -1.0948740000E+04f, -4.1870000000E-01f, -1.3000000000E-03f,
    -3.1200000000E+00f, 1.2387840000E+04f,  -1.2223000000E+02f, -9.9298100000E+01f,
    -3.0900000000E+00f, -8.9123000000E+01f, -8.4440000000E+01f, 7.4120000000E+01f,
    -1.9489100000E+03f, -9.0800002300E+02f, -9.1760000000E+01f, -9.1236132000E+04f,
    -9.9913000000E+04f, -9.1391840000E+02f, 1.3491813187E+05f,  8.1398119700E+05f,
    -1.8416360000E-01f, -4.1919410000E+03f, -9.8141947000E+03f, -8.1466668173E+06f,
    -6.1809000000E+04f, -9.8961332000E+05f, 9.4871200000E+04f,  -9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MNEG[32] = {
    -1.0000000000E+00f, 1.2430000000E+03f,  -1.9123000000E+01f, 5.8198000000E+02f,
    1.4141870000E+04f,  -1.0948740000E+04f, -4.1870000000E-01f, 1.3000000000E-03f,
    3.1200000000E+00f,  1.2387840000E+04f,  -1.2223000000E+02f, 9.9298100000E+01f,
    -3.0900000000E+00f, 8.9123000000E+01f,  8.4440000000E+01f,  7.4120000000E+01f,
    1.9489100000E+03f,  -9.0800002300E+02f, -9.1760000000E+01f, 9.1236132000E+04f,
    -9.9913000000E+04f, 9.1391840000E+02f,  -1.3491813187E+05f, 8.1398119700E+05f,
    -1.8416360000E-01f, 4.1919410000E+03f,  9.8141947000E+03f,  -8.1466668173E+06f,
    6.1809000000E+04f,  -9.8961332000E+05f, 9.4871200000E+04f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::ABS[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  1.9123000000E+01f,  5.8198000000E+02f,
    1.4141870000E+04f,  1.0948740000E+04f,  4.1870000000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  1.2387840000E+04f,  1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  7.4120000000E+01f,
    1.9489100000E+03f,  9.0800002300E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  1.3491813187E+05f,  8.1398119700E+05f,
    1.8416360000E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  9.4871200000E+04f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::MABS[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, 5.8198000000E+02f,
    1.4141870000E+04f,  1.0948740000E+04f,  4.1870000000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  1.2387840000E+04f,  1.2223000000E+02f,  9.9298100000E+01f,
    3.0900000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  7.4120000000E+01f,
    1.9489100000E+03f,  9.0800002300E+02f,  9.1760000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, 8.1398119700E+05f,
    1.8416360000E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466668173E+06f,
    6.1809000000E+04f,  9.8961332000E+05f,  9.4871200000E+04f,  9.9999999990E+04f
};

const float DataSet_1_32f::outputs::SQR[32] = {
    1.0000000000E+00f,  1.5450490000E+06f,  3.6568912900E+02f,  3.3870072040E+05f,
    1.9999248710E+08f,  1.1987490759E+08f,  1.7530969000E-01f,  1.6900000000E-06f,
    9.7344000000E+00f,  1.5345857987E+08f,  1.4940172900E+04f,  9.8601126636E+03f,
    9.5481000000E+00f,  7.9429091290E+03f,  7.1301136000E+03f,  5.4937744000E+03f,
    3.7982501881E+06f,  8.2446404177E+05f,  8.4198976000E+03f,  8.3240317823E+09f,
    9.9826075690E+09f,  8.3524684186E+05f,  1.8202902307E+10f,  6.6256538907E+11f,
    3.3916231565E-02f,  1.7572369347E+07f,  9.6318417610E+07f,  6.6368180232E+13f,
    3.8203524810E+09f,  9.7933452312E+11f,  9.0005445894E+09f,  9.9999999980E+09f
};

const float DataSet_1_32f::outputs::MSQR[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, 3.3870072040E+05f,
    1.4141870000E+04f,  1.1987490759E+08f,  1.7530969000E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  1.5345857987E+08f,  1.4940172900E+04f,  9.9298100000E+01f,
    9.5481000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  5.4937744000E+03f,
    1.9489100000E+03f,  8.2446404177E+05f,  8.4198976000E+03f,  9.1236132000E+04f,
    9.9826075690E+09f,  9.1391840000E+02f,  -1.3491813187E+05f, 6.6256538907E+11f,
    3.3916231565E-02f,  4.1919410000E+03f,  9.8141947000E+03f,  6.6368180232E+13f,
    6.1809000000E+04f,  9.7933452312E+11f,  9.0005445894E+09f,  9.9999999990E+04f
};

// SQRT(ABS(g_Init1_l));
const float DataSet_1_32f::outputs::SQRT[32] = {
    1.0000000000E+00f,  3.5256205128E+01f,  4.3729852504E+00f,  2.4124261647E+01f,
    1.1891959468E+02f,  1.0463622700E+02f,  6.4707032075E-01f,  3.6055512755E-02f,
    1.7663521733E+00f,  1.1130067385E+02f,  1.1055767725E+01f,  9.9648432000E+00f,
    1.7578395831E+00f,  9.4404978682E+00f,  9.1891240061E+00f,  8.6092973000E+00f,
    4.4146460787E+01f,  3.0133038728E+01f,  9.5791440119E+00f,  3.0205319399E+02f,
    3.1609017701E+02f,  3.0231083341E+01f,  3.6731203611E+02f,  9.0220906502E+02f,
    4.2914286665E-01f,  6.4745200594E+01f,  9.9066617485E+01f,  2.8542366435E+03f,
    2.4861415889E+02f,  9.9479310412E+02f,  3.0801168809E+02f,  3.1622776600E+02f
};

const float DataSet_1_32f::outputs::MSQRT[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, 2.4124261647E+01f,
    1.4141870000E+04f,  1.0463622700E+02f,  6.4707032075E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  1.1130067385E+02f,  1.1055767725E+01f,  9.9298100000E+01f,
    1.7578395831E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  8.6092973000E+00f,
    1.9489100000E+03f,  3.0133038728E+01f,  9.5791440119E+00f,  9.1236132000E+04f,
    3.1609017701E+02f,  9.1391840000E+02f,  -1.3491813187E+05f, 9.0220906502E+02f,
    4.2914286665E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  2.8542366435E+03f,
    6.1809000000E+04f,  9.9479310412E+02f,  3.0801168809E+02f,  9.9999999990E+04f
};

// POWV
// MPOWV
// POWS
// MPOWS

const float DataSet_1_32f::outputs::ROUND[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9000000000E+01f, -5.8200000000E+02f,
    1.4142000000E+04f,  1.0949000000E+04f,  0.0000000000E+00f,  0.0000000000E+00f,
    3.0000000000E+00f,  -1.2388000000E+04f, 1.2200000000E+02f,  9.9000000000E+01f,
    3.0000000000E+00f,  8.9000000000E+01f,  8.4000000000E+01f,  -7.4000000000E+01f,
    1.9490000000E+03f,  9.0800000000E+02f,  9.2000000000E+01f,  9.1236000000E+04f,
    9.9913000000E+04f,  9.1400000000E+02f,  -1.3491800000E+05f, -8.1398100000E+05f,
    0.0000000000E+00f,  4.1920000000E+03f,  9.8140000000E+03f,  8.1466670000E+06f,
    6.1809000000E+04f,  9.8961300000E+05f,  -9.4871000000E+04f, 1.0000000000E+05f
};

// MROUND

const int32_t DataSet_1_32f::outputs::TRUNC[32] = {
    1,      1243,       -19,    -581,       14141,  10948,      0,          0,
    3,      -12387,     122,    99,         3,      89,         84,         -74,
    1948,   908,        91,     91236,      99913,  913,        -134918,    -813981,
    0,      4191,       9814,   8146667,    61809,  989613,     -94871,     100000
};

const int32_t DataSet_1_32f::outputs::MTRUNC[32] = {
    1,      0,          0,      -581,       0,      10948,  0,      0,
    0,      -12387,     122,    0,          3,      0,      0,      -74,
    0,      908,        91,     0,          99913,  0,      0,      -813981,
    0,      0,          0,      8146667,    0,      989613, -94871, 0
};

const float DataSet_1_32f::outputs::FLOOR[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -2.0000000000E+01f, -5.8200000000E+02f,
    1.4141000000E+04f,  1.0948000000E+04f,  0.0000000000E+00f,  0.0000000000E+00f,
    3.0000000000E+00f,  -1.2388000000E+04f, 1.2200000000E+02f,  9.9000000000E+01f,
    3.0000000000E+00f,  8.9000000000E+01f,  8.4000000000E+01f,  -7.5000000000E+01f,
    1.9480000000E+03f,  9.0800000000E+02f,  9.1000000000E+01f,  9.1236000000E+04f,
    9.9913000000E+04f,  9.1300000000E+02f,  -1.3491900000E+05f, -8.1398200000E+05f,
    0.0000000000E+00f,  4.1910000000E+03f,  9.8140000000E+03f,  8.1466660000E+06f,
    6.1809000000E+04f,  9.8961300000E+05f,  -9.4872000000E+04f, 9.9999000000E+04f
};

const float DataSet_1_32f::outputs::MFLOOR[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.8200000000E+02f,
    1.4141870000E+04f,  1.0948000000E+04f,  0.0000000000E+00f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.2388000000E+04f, 1.2200000000E+02f,  9.9298100000E+01f,
    3.0000000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.5000000000E+01f,
    1.9489100000E+03f,  9.0800000000E+02f,  9.1000000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1398200000E+05f,
    0.0000000000E+00f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466660000E+06f,
    6.1809000000E+04f,  9.8961300000E+05f,  -9.4872000000E+04f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::CEIL[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9000000000E+01f, -5.8100000000E+02f,
    1.4142000000E+04f,  1.0949000000E+04f,  1.0000000000E+00f,  1.0000000000E+00f,
    4.0000000000E+00f,  -1.2387000000E+04f, 1.2300000000E+02f,  1.0000000000E+02f,
    4.0000000000E+00f,  9.0000000000E+01f,  8.5000000000E+01f,  -7.4000000000E+01f,
    1.9490000000E+03f,  9.0900000000E+02f,  9.2000000000E+01f,  9.1237000000E+04f,
    9.9913000000E+04f,  9.1400000000E+02f,  -1.3491800000E+05f, -8.1398100000E+05f,
    1.0000000000E+00f,  4.1920000000E+03f,  9.8150000000E+03f,  8.1466670000E+06f,
    6.1809000000E+04f,  9.8961400000E+05f,  -9.4871000000E+04f, 1.0000000000E+05f
};

const float DataSet_1_32f::outputs::MCEIL[32] = {
    1.0000000000E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -5.8100000000E+02f,
    1.4141870000E+04f,  1.0949000000E+04f,  1.0000000000E+00f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.2387000000E+04f, 1.2300000000E+02f,  9.9298100000E+01f,
    4.0000000000E+00f,  8.9123000000E+01f,  8.4440000000E+01f,  -7.4000000000E+01f,
    1.9489100000E+03f,  9.0900000000E+02f,  9.2000000000E+01f,  9.1236132000E+04f,
    9.9913000000E+04f,  9.1391840000E+02f,  -1.3491813187E+05f, -8.1398100000E+05f,
    1.0000000000E+00f,  4.1919410000E+03f,  9.8141947000E+03f,  8.1466670000E+06f,
    6.1809000000E+04f,  9.8961400000E+05f,  -9.4871000000E+04f, 9.9999999990E+04f
};

const bool DataSet_1_32f::outputs::ISFIN[32] = {
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true
};

const bool DataSet_1_32f::outputs::ISINF[32] = {
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false
};


const bool DataSet_1_32f::outputs::ISAN[32] = {
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true
};

const bool DataSet_1_32f::outputs::ISNAN[32] = {
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false
};

const bool DataSet_1_32f::outputs::ISNORM[32] = {
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true
};

const bool DataSet_1_32f::outputs::ISSUB[32] = {
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false
};

const bool DataSet_1_32f::outputs::ISZERO[32] = { 
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false
};

const bool DataSet_1_32f::outputs::ISZEROSUB[32] = {
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false,
    false, false, false, false, false, false, false, false
};

const float DataSet_1_32f::outputs::SIN[32] = {
    8.4147098481E-01f,  -8.7753197510E-01f, -2.7004915077E-01f, 7.0707914867E-01f,
    -9.9995647461E-01f, -2.8557105100E-01f, 4.0657309321E-01f,  1.2999996338E-03f,
    2.1590975726E-02f,  5.1427913216E-01f,  2.8797682380E-01f,  -9.4344249541E-01f,
    5.1569768399E-02f,  9.1616527666E-01f,  3.7370631760E-01f,  9.5750505295E-01f,
    9.0121057388E-01f,  -7.9661615953E-02f, -6.0821750295E-01f, -9.0852785691E-01f,
    -8.0092464719E-01f, 2.8121713655E-01f,  6.4897093328E-01f,  -7.3362439608E-01f,
    1.8312434140E-01f,  8.7058994851E-01f,  -1.4028555367E-01f, 9.6254725541E-01f,
    9.6518069580E-01f,  -8.0296387112E-01f, -9.8279811931E-01f, 3.5758791582E-02f
};

const float DataSet_1_32f::outputs::MSIN[32] = {
    8.4147098481E-01f,  1.2430000000E+03f,  -1.9123000000E+01f, 7.0707914867E-01f,
    1.4141870000E+04f,  -2.8557105100E-01f, 4.0657309321E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  5.1427913216E-01f,  2.8797682380E-01f,  9.9298100000E+01f,
    5.1569768399E-02f,  8.9123000000E+01f,  8.4440000000E+01f,  9.5750505295E-01f,
    1.9489100000E+03f,  -7.9661615953E-02f, -6.0821750295E-01f, 9.1236132000E+04f,
    -8.0092464719E-01f, 9.1391840000E+02f,  -1.3491813187E+05f, -7.3362439608E-01f,
    1.8312434140E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  9.6254725541E-01f,
    6.1809000000E+04f,  -8.0296387112E-01f, -9.8279811931E-01f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::COS[32] = {
    5.4030227700E-01f,  4.7951811600E-01f,  9.6284675600E-01f,  -7.0714819400E-01f,
    -9.2128170700E-03f, -9.5829057700E-01f, 9.1361826700E-01f,  9.9999916600E-01f,
    -9.9976688600E-01f, -8.5770320900E-01f, -9.5763832300E-01f, 3.3153936300E-01f,
    -9.9866938600E-01f, 4.0079966200E-01f,  -9.2754799100E-01f, 2.8841912700E-01f,
    4.3335068200E-01f,  -9.9682378800E-01f, -7.9376912100E-01f, -4.1708597500E-01f,
    -5.9876513500E-01f, -9.5964306600E-01f, 7.5633686800E-01f,  6.8649387400E-01f,
    9.8308974500E-01f,  4.9208071800E-01f,  9.9005997200E-01f,  -4.4148242500E-01f,
    2.6158407300E-01f,  5.8998876800E-01f,  1.8161098700E-01f,  -9.9936080000E-01f
};

const float DataSet_1_32f::outputs::MCOS[32] = {
    5.4030227700E-01f,  1.2430000000E+03f,  -1.9123000000E+01f, -7.0714819400E-01f,
    1.4141870000E+04f,  -9.5829057700E-01f, 9.1361826700E-01f,  1.3000000000E-03f,  
    3.1200000000E+00f,  -8.5770320900E-01f, -9.5763832300E-01f, 9.9298100000E+01f,  
    -9.9866938600E-01f, 8.9123000000E+01f,  8.4440000000E+01f,  2.8841912700E-01f,  
    1.9489100000E+03f,  -9.9682378800E-01f, -7.9376912100E-01f, 9.1236132000E+04f,  
    -5.9876513500E-01f, 9.1391840000E+02f,  -1.3491813187E+05f, 6.8649387400E-01f,  
    9.8308974500E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  -4.4148242500E-01f, 
    6.1809000000E+04f,  5.8998876800E-01f,  1.8161098700E-01f,  9.9999999990E+04f   
};


const float DataSet_1_32f::outputs::TAN[32] = {
    1.5574077247E+00f,  -1.8300287903E+00f, -2.8046956608E-01f, -9.9992184804E-01f,
    1.0717648151E+02f,  2.9797965689E-01f,  4.4501419495E-01f,  1.3000007323E-03f,
    -2.1596010021E-02f, -5.9965650949E-01f, -3.0071593927E-01f, -2.8456695525E+00f,
    -5.1638478856E-02f, 2.2858376251E+00f,  -4.0289741092E-01f, 3.3198692703E+00f,
    2.0794856935E+00f,  7.9915590616E-02f,  7.6623856561E-01f,  2.1744256840E+00f,
    1.3376273518E+00f,  -2.9304313725E-01f, 8.5299641476E-01f,  -1.0795655974E+00f,
    1.8627428432E-01f,  1.7694583538E+00f,  -1.4168668102E-01f, -3.5503418695E+00f,
    3.6897533721E+00f,  -1.3471921998E+00f, -5.3215371949E+00f, -3.5781675756E-02f
};

const float DataSet_1_32f::outputs::MTAN[32] = {
    1.5574077247E+00f,  1.2430000000E+03f,  -1.9123000000E+01f, -9.9992184804E-01f,
    1.4141870000E+04f,  2.9797965689E-01f,  4.4501419495E-01f,  1.3000000000E-03f,
    3.1200000000E+00f,  -5.9965650949E-01f, -3.0071593927E-01f, 9.9298100000E+01f,
    -5.1638478856E-02f, 8.9123000000E+01f,  8.4440000000E+01f,  3.3198692703E+00f,
    1.9489100000E+03f,  7.9915590616E-02f,  7.6623856561E-01f,  9.1236132000E+04f,
    1.3376273518E+00f,  9.1391840000E+02f,  -1.3491813187E+05f, -1.0795655974E+00f,
    1.8627428432E-01f,  4.1919410000E+03f,  9.8141947000E+03f,  -3.5503418695E+00f,
    6.1809000000E+04f,  -1.3471921998E+00f, -5.3215371949E+00f, 9.9999999990E+04f
};

const float DataSet_1_32f::outputs::CTAN[32] = {
    6.4209261593E-01f,  -5.4643949064E-01f, -3.5654492357E+00f, -1.0000781581E+00f,
    9.3304051967E-03f,  3.3559337924E+00f,  2.2471193309E+00f,  7.6923033590E+02f,
    -4.6304849785E+01f, -1.6676213535E+00f, -3.3253973914E+00f, -3.5141114650E-01f,
    -1.9365403903E+01f, 4.3747639334E-01f,  -2.4820214101E+00f, 3.0121668011E-01f,
    4.8088813649E-01f,  1.2513202897E+01f,  1.3050765713E+00f,  4.5989155083E-01f,
    7.4759236840E-01f,  -3.4124668791E+00f, 1.1723378700E+00f,  -9.2629850601E-01f,
    5.3684275512E+00f,  5.6514469406E-01f,  -7.0578264153E+00f, -2.8166301634E-01f,
    2.7102082420E-01f,  -7.4228458283E-01f, -1.8791562727E-01f, -2.7947265713E+01f
};

const float DataSet_1_32f::outputs::MCTAN[32] = {
    6.4209261593E-01f,  1.2430000000E+03f,  -1.9123000000E+01f, -1.0000781581E+00f,
    1.4141870000E+04f,  3.3559337924E+00f,  2.2471193309E+00f,  1.3000000000E-03f,
    3.1200000000E+00f,  -1.6676213535E+00f, -3.3253973914E+00f, 9.9298100000E+01f,
    -1.9365403903E+01f, 8.9123000000E+01f,  8.4440000000E+01f,  3.0121668011E-01f,
    1.9489100000E+03f,  1.2513202897E+01f,  1.3050765713E+00f,  9.1236132000E+04f,
    7.4759236840E-01f,  9.1391840000E+02f,  -1.3491813187E+05f, -9.2629850601E-01f,
    5.3684275512E+00f,  4.1919410000E+03f,  9.8141947000E+03f,  -2.8166301634E-01f,
    6.1809000000E+04f,  -7.4228458283E-01f, -1.8791562727E-01f, 9.9999999990E+04f
};