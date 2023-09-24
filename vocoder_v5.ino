/* 
 *  Vocoder version 5
 *  Last updated: 21/5/22
 *  32-band vocoder with additional white noise source (33rd band) for fricative and sibilance emphasis
 */
 
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s1;           //xy=615.8333396911626,1858.3332654237747
AudioMixer4              mic_in;         //xy=811.5001258850098,897.000072479248
AudioMixer4              instrument_in;         //xy=976.833625793457,2292.334056854248
AudioFilterStateVariable voice0_2;        //xy=997.5557880401611,1702.6668701171875
AudioFilterBiquad        voice33;       //xy=1017.7334651947024,1557.6666423082352
AudioFilterBiquad        voice7;        //xy=1048.1672286987307,1153.0002102851868
AudioFilterBiquad        voice8;        //xy=1048.1672515869143,1188.00024330616
AudioFilterBiquad        voice6;        //xy=1051.5005645751955,1118.0001649856567
AudioFilterBiquad        voice5;        //xy=1053.167251586914,1081.3335571289062
AudioFilterBiquad        voice2;        //xy=1054.8340187072756,969.6669026613235
AudioFilterBiquad        voice1;       //xy=1055.0672721862793,937.000171661377
AudioFilterBiquad        voice3;        //xy=1054.833984375,1006.3334999084473
AudioFilterBiquad        voice4;        //xy=1054.8339576721191,1043.0001783370972
AudioSynthNoiseWhite     noise1;         //xy=1119.6912956237793,1638.9290027618408
AudioEffectRectifier     rectify33;       //xy=1170.0002555847168,1557.3332290649414
AudioEffectRectifier     rectify1;       //xy=1256.238540649414,1001.4762268066406
AudioEffectRectifier     rectify3;       //xy=1256.9051094055176,1066.9048175811768
AudioEffectRectifier     rectify2;       //xy=1257.1432342529297,1034.5238952636719
AudioEffectRectifier     rectify4;       //xy=1257.619426727295,1099.7619409561157
AudioEffectRectifier     rectify5; //xy=1257.857566833496,1133.5715084075928
AudioEffectRectifier     rectify8; //xy=1257.5718307495117,1250.1905221939087
AudioEffectRectifier     rectify7; //xy=1258.5241813659668,1209.0001163482666
AudioEffectRectifier     rectify6; //xy=1258.762363433838,1169.9524898529053
AudioEffectRectifier     rectify0;       //xy=1278.0002632141113,1719.5554943084717
AudioFilterBiquad        noiseFilter;       //xy=1298.1671562194824,1638.500126838684
AudioFilterBiquad        envelope33;       //xy=1318.9049491882324,1557.571509361267
AudioFilterBiquad        instr8; //xy=1387.3339767456055,2087.500270485878
AudioFilterBiquad        instr7; //xy=1387.667278289795,2050.5002551078796
AudioFilterBiquad        envelope8; //xy=1392.9527397155762,1242.0240650177002
AudioFilterBiquad        envelope4;       //xy=1393.952735900879,1104.8811178207397
AudioFilterBiquad        voice15; //xy=1395.0005950927734,889.5000846385956
AudioFilterBiquad        envelope7; //xy=1393.9049758911133,1207.2621126174927
AudioFilterBiquad        instr4; //xy=1391.0006256103516,1937.166873574257
AudioFilterBiquad        envelope6; //xy=1394.1433067321777,1173.6907539367676
AudioFilterBiquad        voice13;       //xy=1395.667148590088,815.1667629480362
AudioFilterBiquad        voice16; //xy=1395.3338012695312,927.8334109783173
AudioFilterBiquad        instr6; //xy=1391.0006141662598,2015.5002098083496
AudioFilterBiquad        envelope3;       //xy=1394.904972076416,1070.1191654205322
AudioFilterBiquad        instr2; //xy=1391.8340682983398,1858.000210762024
AudioFilterBiquad        envelope2;       //xy=1395.1433029174805,1036.5478067398071
AudioFilterBiquad        envelope5; //xy=1394.8575744628906,1139.1669054031372
AudioFilterBiquad        voice9;        //xy=1397.000316619873,672.8335258960724
AudioFilterBiquad        voice10;        //xy=1397.0002136230469,707.8333990573883
AudioFilterBiquad        envelope1;       //xy=1395.8575706481934,1002.0239582061768
AudioFilterBiquad        voice11;       //xy=1397.0002555847168,744.500128030777
AudioFilterBiquad        voice14; //xy=1396.6671981811523,853.1667582988739
AudioFilterBiquad        voice12;       //xy=1397.0002365112305,779.5001213550568
AudioFilterBiquad        instr3; //xy=1392.667293548584,1898.8335456848145
AudioFilterBiquad        instr5; //xy=1392.6672973632812,1975.5002269744873
AudioFilterBiquad        instr1;       //xy=1394.0004959106445,1818.7502555847168
AudioFilterBiquad        envelope0;       //xy=1454.2223358154297,1726.6668224334717
AudioFilterStateVariable instr0; //xy=1611.4287796020508,1787.2857685089111
AudioEffectRectifier     rectify9; //xy=1626.0478897094727,1011.0716285705566
AudioEffectRectifier     rectify11; //xy=1626.7144584655762,1076.5002193450928
AudioEffectRectifier     rectify10; //xy=1626.9525833129883,1044.119297027588
AudioEffectRectifier     rectify12; //xy=1627.4287757873535,1109.3573427200317
AudioEffectRectifier     rectify13; //xy=1627.6669158935547,1143.1669101715088
AudioEffectRectifier     rectify15;  //xy=1628.3334846496582,1208.595500946045
AudioEffectRectifier     rectify14; //xy=1628.5716094970703,1176.21457862854
AudioEffectRectifier     rectify16; //xy=1629.0478019714355,1241.452624320984
AudioEffectMultiply      multiply1;      //xy=1655.4998016357422,1326.000654220581
AudioEffectMultiply      multiply2;      //xy=1656.8332061767578,1360.66699552536
AudioEffectMultiply      multiply3;      //xy=1656.833251953125,1394.6670393943787
AudioEffectMultiply      multiply4;      //xy=1659.166603088379,1429.0004125833511
AudioEffectMultiply      multiply5; //xy=1660.1665267944336,1462.3336100578308
AudioEffectMultiply      multiply6; //xy=1661.4998321533208,1495.0002474784856
AudioEffectMultiply      multiply7; //xy=1661.499877929688,1529.0002913475041
AudioEffectMultiply      multiply8; //xy=1663.8332290649419,1563.3336645364766
AudioEffectMultiply      multiply33;      //xy=1663.4999732971191,1655.8336172103882
AudioFilterBiquad        envelope16; //xy=1768.6195335388184,1245.9527645111084
AudioFilterBiquad        envelope12; //xy=1769.619529724121,1108.809817314148
AudioFilterBiquad        envelope15; //xy=1769.5717697143555,1211.1908121109009
AudioFilterBiquad        envelope14; //xy=1769.81010055542,1177.6194534301758
AudioFilterBiquad        envelope11; //xy=1770.5717658996582,1074.0478649139404
AudioFilterBiquad        envelope10; //xy=1770.8100967407227,1040.4765062332153
AudioFilterBiquad        envelope13; //xy=1770.5243682861328,1143.0956048965454
AudioFilterBiquad        voice19; //xy=1772.5007133483887,753.8335642814636
AudioFilterBiquad        envelope9; //xy=1771.5243644714355,1005.952657699585
AudioFilterBiquad        instr9; //xy=1768.333896636963,1817.1678085327148
AudioFilterBiquad        instr10; //xy=1768.3337936401367,1852.1676816940308
AudioFilterBiquad        voice21; //xy=1772.5007362365723,825.5002555847168
AudioFilterBiquad        instr11; //xy=1768.3338356018066,1888.8344106674194
AudioFilterBiquad        voice22; //xy=1772.5006408691406,860.5001850128174
AudioFilterBiquad        instr12; //xy=1768.3338165283203,1923.8344039916992
AudioFilterBiquad        voice23; //xy=1772.5006408691406,895.5002212524414
AudioFilterBiquad        voice24; //xy=1772.5006637573242,932.1669073104861
AudioFilterBiquad        voice20; //xy=1774.1674156188965,788.8335753679276
AudioFilterBiquad        instr13; //xy=1770.8338813781738,1960.0010204315186
AudioFilterBiquad        voice18; //xy=1775.8340492248535,718.8335189819336
AudioFilterBiquad        instr14; //xy=1771.8338623046875,1996.0010023117065
AudioFilterBiquad        voice17; //xy=1777.16749572754,683.5001883506777
AudioFilterBiquad        instr15; //xy=1772.1672668457031,2032.3344011306763
AudioFilterBiquad        instr16; //xy=1772.5006637573242,2068.6676054000854
AudioEffectMultiply      multiply0;      //xy=1944,1736.2857675552368
AudioEffectRectifier     rectify17; //xy=1992.90523147583,1021.2859783172607
AudioEffectRectifier     rectify19; //xy=1993.5718002319336,1086.7145690917969
AudioEffectRectifier     rectify18; //xy=1993.8099250793457,1054.333646774292
AudioEffectRectifier     rectify20; //xy=1994.286117553711,1119.5716924667358
AudioEffectRectifier     rectify21; //xy=1994.524257659912,1153.381259918213
AudioEffectRectifier     rectify23; //xy=1995.1908264160156,1218.809850692749
AudioEffectRectifier     rectify22; //xy=1995.4289512634277,1186.4289283752441
AudioEffectRectifier     rectify24; //xy=1995.905143737793,1251.666974067688
AudioEffectMultiply      multiply9; //xy=2036.000732421875,1327.333991408348
AudioEffectMultiply      multiply10; //xy=2037.3338165283203,1365.0005130767822
AudioEffectMultiply      multiply11; //xy=2037.3338623046875,1399.0005569458008
AudioEffectMultiply      multiply13; //xy=2040.667137145996,1466.667127609253
AudioEffectMultiply      multiply12; //xy=2041.6671867370605,1433.333984375
AudioEffectMultiply      multiply14; //xy=2042.0004425048833,1499.3337650299077
AudioEffectMultiply      multiply15; //xy=2042.0004882812505,1533.3338088989262
AudioEffectMultiply      multiply16; //xy=2044.3338394165044,1567.6671820878987
AudioFilterBiquad        instr20; //xy=2122.429328918457,1928.9769868850708
AudioFilterBiquad        instr18;  //xy=2123.23885345459,1855.8339595794678
AudioFilterBiquad        instr17; //xy=2123.4769287109375,1819.834032177925
AudioFilterBiquad        instr19; //xy=2123.619873046875,1891.9768906831741
AudioFilterBiquad        instr21; //xy=2124.1912841796875,1963.6436520814896
AudioFilterBiquad        instr22; //xy=2125.6197395324707,2001.50059902668
AudioFilterBiquad        instr23; //xy=2125.619758605957,2037.9294015169144
AudioFilterBiquad        instr24; //xy=2125.61967086792,2073.1674481630325
AudioFilterBiquad        envelope24; //xy=2138.1436767578125,1258.9289512634277
AudioFilterBiquad        envelope20; //xy=2139.1436729431152,1121.7860040664673
AudioFilterBiquad        envelope23; //xy=2139.0959129333496,1224.1669988632202
AudioFilterBiquad        envelope22; //xy=2139.334243774414,1190.5956401824951
AudioFilterBiquad        envelope19; //xy=2140.0959091186523,1087.0240516662598
AudioFilterBiquad        envelope18; //xy=2140.334239959717,1053.4526929855347
AudioFilterBiquad        envelope21; //xy=2140.048511505127,1156.0717916488647
AudioFilterBiquad        envelope17; //xy=2141.0485076904297,1018.9288444519043
AudioFilterBiquad        voice27; //xy=2145.7346839904785,750.6667809486389
AudioFilterBiquad        voice29;  //xy=2145.734706878662,822.3334722518921
AudioFilterBiquad        voice30; //xy=2145.7346115112305,857.3334016799927
AudioFilterBiquad        voice31; //xy=2145.7346115112305,892.3334379196167
AudioFilterBiquad        voice32; //xy=2145.734634399414,929.0001239776611
AudioFilterBiquad        voice28; //xy=2147.4013862609863,785.6667920351028
AudioFilterBiquad        voice25;  //xy=2148.7347869873047,681.6667424440384
AudioFilterBiquad        voice26; //xy=2149.0680198669434,715.6667356491089
AudioFilterBiquad        instr28; //xy=2340.8541679382315,2239.9772514104834
AudioFilterBiquad        instr25; //xy=2341.901767730712,2130.8342967033377
AudioFilterBiquad        instr27;  //xy=2342.0447120666495,2202.9771552085867
AudioFilterBiquad        instr26; //xy=2342.806594848632,2165.40570783615
AudioFilterBiquad        instr29; //xy=2342.616123199462,2274.643916606902
AudioFilterBiquad        instr30; //xy=2344.044578552245,2312.5008635520926
AudioFilterBiquad        instr31; //xy=2344.0445976257315,2348.929666042327
AudioFilterBiquad        instr32; //xy=2344.0445098876944,2384.167712688445
AudioEffectRectifier     rectify25; //xy=2358.3107109069824,1033.214358329773
AudioEffectRectifier     rectify27; //xy=2358.977279663086,1098.642949104309
AudioEffectRectifier     rectify26; //xy=2359.215404510498,1066.2620267868042
AudioEffectRectifier     rectify28; //xy=2359.6915969848633,1131.500072479248
AudioEffectRectifier     rectify29; //xy=2359.9297370910645,1165.309639930725
AudioEffectRectifier     rectify31; //xy=2360.596305847168,1230.7382307052612
AudioEffectRectifier     rectify30; //xy=2360.83443069458,1198.3573083877563
AudioEffectRectifier     rectify32; //xy=2361.3106231689453,1263.5953540802002
AudioEffectMultiply      multiply17; //xy=2484.4997940063477,1594.3339099884033
AudioEffectMultiply      multiply18; //xy=2485.833099365235,1627.000547409058
AudioEffectMultiply      multiply19; //xy=2485.833145141602,1661.0005912780766
AudioEffectMultiply      multiply20; //xy=2488.166496276856,1695.333964467049
AudioEffectMultiply      multiply21; //xy=2489.1664199829106,1728.6671619415288
AudioEffectMultiply      multiply22; //xy=2490.499725341798,1761.3337993621835
AudioEffectMultiply      multiply23; //xy=2490.499771118165,1795.333843231202
AudioEffectMultiply      multiply24; //xy=2492.833122253419,1829.6672164201746
AudioFilterBiquad        envelope32; //xy=2496.1202964782715,1269.7620859146118
AudioFilterBiquad        envelope28; //xy=2497.120292663574,1132.6191387176514
AudioFilterBiquad        envelope31; //xy=2497.0725326538086,1235.0001335144043
AudioFilterBiquad        envelope30; //xy=2497.310863494873,1201.4287748336792
AudioFilterBiquad        envelope27; //xy=2498.0725288391113,1097.8571863174438
AudioFilterBiquad        envelope26; //xy=2498.310859680176,1064.2858276367188
AudioFilterBiquad        envelope29; //xy=2498.025131225586,1166.9049263000488
AudioFilterBiquad        envelope25; //xy=2499.0251274108887,1029.7619791030884
AudioEffectMultiply      multiply25; //xy=2779.5009689331055,1919.8340120315552
AudioEffectMultiply      multiply26; //xy=2780.8342742919926,1952.50064945221
AudioEffectMultiply      multiply27; //xy=2780.83432006836,1986.5006933212285
AudioEffectMultiply      multiply28; //xy=2783.1676712036137,2020.834066510201
AudioEffectMultiply      multiply29; //xy=2784.1675949096684,2054.1672639846806
AudioEffectMultiply      multiply30; //xy=2785.5009002685556,2086.8339014053354
AudioEffectMultiply      multiply31; //xy=2785.500946044923,2120.833945274354
AudioEffectMultiply      multiply32; //xy=2787.8342971801767,2155.1673184633264
AudioMixer4              mixer1;         //xy=3006.666763305664,1305.1668090820312
AudioMixer4              mixer2;         //xy=3007.4999656677246,1386.8334159851074
AudioMixer4              mixer3;         //xy=3008.999973297119,1483.5000228881836
AudioMixer4              mixer7;         //xy=3015.6664505004883,1900.5000305175781
AudioMixer4              mixer4;         //xy=3019.4999923706055,1589.3336181640625
AudioMixer4              mixer5;         //xy=3019.667037963867,1681.0002212524414
AudioMixer4              mixer6;         //xy=3020.500045776367,1794.50022315979
AudioMixer4              mixer8;        //xy=3023.6668395996094,1996.8338203430176
AudioMixer4              mixer9;        //xy=3260.9004402160645,1487.5000228881836
AudioMixer4              mixer11;        //xy=3259.900287628174,1880.5000534057617
AudioMixer4              mixer10;        //xy=3260.900489807129,1704.0000629425049
AudioMixer4              finalMix;        //xy=3522.4000244140616,1713.9999999999995
AudioOutputI2S           i2s2;           //xy=3705.6001529693604,1716.0000257492065
AudioConnection          patchCord1(i2s1, 0, mic_in, 0);
AudioConnection          patchCord2(i2s1, 1, instrument_in, 0);
AudioConnection          patchCord3(mic_in, voice2);
AudioConnection          patchCord4(mic_in, voice3);
AudioConnection          patchCord5(mic_in, voice4);
AudioConnection          patchCord6(mic_in, voice5);
AudioConnection          patchCord7(mic_in, voice6);
AudioConnection          patchCord8(mic_in, voice7);
AudioConnection          patchCord9(mic_in, voice8);
AudioConnection          patchCord10(mic_in, voice9);
AudioConnection          patchCord11(mic_in, voice10);
AudioConnection          patchCord12(mic_in, voice11);
AudioConnection          patchCord13(mic_in, voice12);
AudioConnection          patchCord14(mic_in, voice13);
AudioConnection          patchCord15(mic_in, voice14);
AudioConnection          patchCord16(mic_in, voice15);
AudioConnection          patchCord17(mic_in, voice16);
AudioConnection          patchCord18(mic_in, voice17);
AudioConnection          patchCord19(mic_in, voice18);
AudioConnection          patchCord20(mic_in, voice19);
AudioConnection          patchCord21(mic_in, voice20);
AudioConnection          patchCord22(mic_in, voice21);
AudioConnection          patchCord23(mic_in, voice22);
AudioConnection          patchCord24(mic_in, voice23);
AudioConnection          patchCord25(mic_in, voice24);
AudioConnection          patchCord26(mic_in, voice1);
AudioConnection          patchCord27(mic_in, voice25);
AudioConnection          patchCord28(mic_in, voice26);
AudioConnection          patchCord29(mic_in, voice27);
AudioConnection          patchCord30(mic_in, voice28);
AudioConnection          patchCord31(mic_in, voice29);
AudioConnection          patchCord32(mic_in, voice30);
AudioConnection          patchCord33(mic_in, voice31);
AudioConnection          patchCord34(mic_in, voice32);
AudioConnection          patchCord35(mic_in, voice33);
AudioConnection          patchCord36(mic_in, 0, voice0_2, 0);
AudioConnection          patchCord37(instrument_in, 0, instr0, 0);
AudioConnection          patchCord38(instrument_in, instr2);
AudioConnection          patchCord39(instrument_in, instr3);
AudioConnection          patchCord40(instrument_in, instr4);
AudioConnection          patchCord41(instrument_in, instr5);
AudioConnection          patchCord42(instrument_in, instr6);
AudioConnection          patchCord43(instrument_in, instr7);
AudioConnection          patchCord44(instrument_in, instr8);
AudioConnection          patchCord45(instrument_in, instr9);
AudioConnection          patchCord46(instrument_in, instr10);
AudioConnection          patchCord47(instrument_in, instr11);
AudioConnection          patchCord48(instrument_in, instr12);
AudioConnection          patchCord49(instrument_in, instr13);
AudioConnection          patchCord50(instrument_in, instr14);
AudioConnection          patchCord51(instrument_in, instr15);
AudioConnection          patchCord52(instrument_in, instr16);
AudioConnection          patchCord53(instrument_in, instr17);
AudioConnection          patchCord54(instrument_in, instr18);
AudioConnection          patchCord55(instrument_in, instr19);
AudioConnection          patchCord56(instrument_in, instr20);
AudioConnection          patchCord57(instrument_in, instr21);
AudioConnection          patchCord58(instrument_in, instr22);
AudioConnection          patchCord59(instrument_in, instr23);
AudioConnection          patchCord60(instrument_in, instr24);
AudioConnection          patchCord61(instrument_in, instr1);
AudioConnection          patchCord62(instrument_in, instr25);
AudioConnection          patchCord63(instrument_in, instr26);
AudioConnection          patchCord64(instrument_in, instr27);
AudioConnection          patchCord65(instrument_in, instr28);
AudioConnection          patchCord66(instrument_in, instr29);
AudioConnection          patchCord67(instrument_in, instr30);
AudioConnection          patchCord68(instrument_in, instr31);
AudioConnection          patchCord69(instrument_in, instr32);
AudioConnection          patchCord70(voice0_2, 1, rectify0, 0);
AudioConnection          patchCord71(voice33, rectify33);
AudioConnection          patchCord72(voice7, rectify7);
AudioConnection          patchCord73(voice8, rectify8);
AudioConnection          patchCord74(voice6, rectify6);
AudioConnection          patchCord75(voice5, rectify5);
AudioConnection          patchCord76(voice2, rectify2);
AudioConnection          patchCord77(voice1, rectify1);
AudioConnection          patchCord78(voice3, rectify3);
AudioConnection          patchCord79(voice4, rectify4);
AudioConnection          patchCord80(noise1, noiseFilter);
AudioConnection          patchCord81(rectify33, envelope33);
AudioConnection          patchCord82(rectify1, envelope1);
AudioConnection          patchCord83(rectify3, envelope3);
AudioConnection          patchCord84(rectify2, envelope2);
AudioConnection          patchCord85(rectify4, envelope4);
AudioConnection          patchCord86(rectify5, envelope5);
AudioConnection          patchCord87(rectify8, envelope8);
AudioConnection          patchCord88(rectify7, envelope7);
AudioConnection          patchCord89(rectify6, envelope6);
AudioConnection          patchCord90(rectify0, envelope0);
AudioConnection          patchCord91(noiseFilter, 0, multiply33, 1);
AudioConnection          patchCord92(envelope33, 0, multiply33, 0);
AudioConnection          patchCord93(instr8, 0, multiply8, 1);
AudioConnection          patchCord94(instr7, 0, multiply7, 1);
AudioConnection          patchCord95(envelope8, 0, multiply8, 0);
AudioConnection          patchCord96(envelope4, 0, multiply4, 0);
AudioConnection          patchCord97(voice15, rectify15);
AudioConnection          patchCord98(envelope7, 0, multiply7, 0);
AudioConnection          patchCord99(instr4, 0, multiply4, 1);
AudioConnection          patchCord100(envelope6, 0, multiply6, 0);
AudioConnection          patchCord101(voice13, rectify13);
AudioConnection          patchCord102(voice16, rectify16);
AudioConnection          patchCord103(instr6, 0, multiply6, 1);
AudioConnection          patchCord104(envelope3, 0, multiply3, 0);
AudioConnection          patchCord105(instr2, 0, multiply2, 1);
AudioConnection          patchCord106(envelope2, 0, multiply2, 0);
AudioConnection          patchCord107(envelope5, 0, multiply5, 0);
AudioConnection          patchCord108(voice9, rectify9);
AudioConnection          patchCord109(voice10, rectify10);
AudioConnection          patchCord110(envelope1, 0, multiply1, 0);
AudioConnection          patchCord111(voice11, rectify11);
AudioConnection          patchCord112(voice14, rectify14);
AudioConnection          patchCord113(voice12, rectify12);
AudioConnection          patchCord114(instr3, 0, multiply3, 1);
AudioConnection          patchCord115(instr5, 0, multiply5, 1);
AudioConnection          patchCord116(instr1, 0, multiply1, 1);
AudioConnection          patchCord117(envelope0, 0, multiply0, 0);
AudioConnection          patchCord118(instr0, 1, multiply0, 1);
AudioConnection          patchCord119(rectify9, envelope9);
AudioConnection          patchCord120(rectify11, envelope11);
AudioConnection          patchCord121(rectify10, envelope10);
AudioConnection          patchCord122(rectify12, envelope12);
AudioConnection          patchCord123(rectify13, envelope13);
AudioConnection          patchCord124(rectify15, envelope15);
AudioConnection          patchCord125(rectify14, envelope14);
AudioConnection          patchCord126(rectify16, envelope16);
AudioConnection          patchCord127(multiply1, 0, mixer1, 1);
AudioConnection          patchCord128(multiply2, 0, mixer1, 2);
AudioConnection          patchCord129(multiply3, 0, mixer1, 3);
AudioConnection          patchCord130(multiply4, 0, mixer2, 0);
AudioConnection          patchCord131(multiply5, 0, mixer2, 1);
AudioConnection          patchCord132(multiply6, 0, mixer2, 2);
AudioConnection          patchCord133(multiply7, 0, mixer2, 3);
AudioConnection          patchCord134(multiply8, 0, mixer3, 0);
AudioConnection          patchCord135(multiply33, 0, mixer11, 0);
AudioConnection          patchCord136(envelope16, 0, multiply16, 0);
AudioConnection          patchCord137(envelope12, 0, multiply12, 0);
AudioConnection          patchCord138(envelope15, 0, multiply15, 0);
AudioConnection          patchCord139(envelope14, 0, multiply14, 0);
AudioConnection          patchCord140(envelope11, 0, multiply11, 0);
AudioConnection          patchCord141(envelope10, 0, multiply10, 0);
AudioConnection          patchCord142(envelope13, 0, multiply13, 0);
AudioConnection          patchCord143(voice19, rectify19);
AudioConnection          patchCord144(envelope9, 0, multiply9, 0);
AudioConnection          patchCord145(instr9, 0, multiply9, 1);
AudioConnection          patchCord146(instr10, 0, multiply10, 1);
AudioConnection          patchCord147(voice21, rectify21);
AudioConnection          patchCord148(instr11, 0, multiply11, 1);
AudioConnection          patchCord149(voice22, rectify22);
AudioConnection          patchCord150(instr12, 0, multiply12, 1);
AudioConnection          patchCord151(voice23, rectify23);
AudioConnection          patchCord152(voice24, rectify24);
AudioConnection          patchCord153(voice20, rectify20);
AudioConnection          patchCord154(instr13, 0, multiply13, 1);
AudioConnection          patchCord155(voice18, rectify18);
AudioConnection          patchCord156(instr14, 0, multiply14, 1);
AudioConnection          patchCord157(voice17, rectify17);
AudioConnection          patchCord158(instr15, 0, multiply15, 1);
AudioConnection          patchCord159(instr16, 0, multiply16, 1);
AudioConnection          patchCord160(multiply0, 0, mixer1, 0);
AudioConnection          patchCord161(rectify17, envelope17);
AudioConnection          patchCord162(rectify19, envelope19);
AudioConnection          patchCord163(rectify18, envelope18);
AudioConnection          patchCord164(rectify20, envelope20);
AudioConnection          patchCord165(rectify21, envelope21);
AudioConnection          patchCord166(rectify23, envelope23);
AudioConnection          patchCord167(rectify22, envelope22);
AudioConnection          patchCord168(rectify24, envelope24);
AudioConnection          patchCord169(multiply9, 0, mixer3, 1);
AudioConnection          patchCord170(multiply10, 0, mixer3, 2);
AudioConnection          patchCord171(multiply11, 0, mixer3, 3);
AudioConnection          patchCord172(multiply13, 0, mixer4, 1);
AudioConnection          patchCord173(multiply12, 0, mixer4, 0);
AudioConnection          patchCord174(multiply14, 0, mixer4, 2);
AudioConnection          patchCord175(multiply15, 0, mixer4, 3);
AudioConnection          patchCord176(multiply16, 0, mixer5, 0);
AudioConnection          patchCord177(instr20, 0, multiply20, 1);
AudioConnection          patchCord178(instr18, 0, multiply18, 1);
AudioConnection          patchCord179(instr17, 0, multiply17, 1);
AudioConnection          patchCord180(instr19, 0, multiply19, 1);
AudioConnection          patchCord181(instr21, 0, multiply21, 1);
AudioConnection          patchCord182(instr22, 0, multiply22, 1);
AudioConnection          patchCord183(instr23, 0, multiply23, 1);
AudioConnection          patchCord184(instr24, 0, multiply24, 1);
AudioConnection          patchCord185(envelope24, 0, multiply24, 0);
AudioConnection          patchCord186(envelope20, 0, multiply20, 0);
AudioConnection          patchCord187(envelope23, 0, multiply23, 0);
AudioConnection          patchCord188(envelope22, 0, multiply22, 0);
AudioConnection          patchCord189(envelope19, 0, multiply19, 0);
AudioConnection          patchCord190(envelope18, 0, multiply18, 0);
AudioConnection          patchCord191(envelope21, 0, multiply21, 0);
AudioConnection          patchCord192(envelope17, 0, multiply17, 0);
AudioConnection          patchCord193(voice27, rectify27);
AudioConnection          patchCord194(voice29, rectify29);
AudioConnection          patchCord195(voice30, rectify30);
AudioConnection          patchCord196(voice31, rectify31);
AudioConnection          patchCord197(voice32, rectify32);
AudioConnection          patchCord198(voice28, rectify28);
AudioConnection          patchCord199(voice25, rectify25);
AudioConnection          patchCord200(voice26, rectify26);
AudioConnection          patchCord201(instr28, 0, multiply28, 1);
AudioConnection          patchCord202(instr25, 0, multiply25, 1);
AudioConnection          patchCord203(instr27, 0, multiply27, 1);
AudioConnection          patchCord204(instr26, 0, multiply26, 1);
AudioConnection          patchCord205(instr29, 0, multiply29, 1);
AudioConnection          patchCord206(instr30, 0, multiply30, 1);
AudioConnection          patchCord207(instr31, 0, multiply31, 1);
AudioConnection          patchCord208(instr32, 0, multiply32, 1);
AudioConnection          patchCord209(rectify25, envelope25);
AudioConnection          patchCord210(rectify27, envelope27);
AudioConnection          patchCord211(rectify26, envelope26);
AudioConnection          patchCord212(rectify28, envelope28);
AudioConnection          patchCord213(rectify29, envelope29);
AudioConnection          patchCord214(rectify31, envelope31);
AudioConnection          patchCord215(rectify30, envelope30);
AudioConnection          patchCord216(rectify32, envelope32);
AudioConnection          patchCord217(multiply17, 0, mixer5, 1);
AudioConnection          patchCord218(multiply18, 0, mixer5, 2);
AudioConnection          patchCord219(multiply19, 0, mixer5, 3);
AudioConnection          patchCord220(multiply20, 0, mixer6, 0);
AudioConnection          patchCord221(multiply21, 0, mixer6, 1);
AudioConnection          patchCord222(multiply22, 0, mixer6, 2);
AudioConnection          patchCord223(multiply23, 0, mixer6, 3);
AudioConnection          patchCord224(multiply24, 0, mixer7, 0);
AudioConnection          patchCord225(envelope32, 0, multiply32, 0);
AudioConnection          patchCord226(envelope28, 0, multiply28, 0);
AudioConnection          patchCord227(envelope31, 0, multiply31, 0);
AudioConnection          patchCord228(envelope30, 0, multiply30, 0);
AudioConnection          patchCord229(envelope27, 0, multiply27, 0);
AudioConnection          patchCord230(envelope26, 0, multiply26, 0);
AudioConnection          patchCord231(envelope29, 0, multiply29, 0);
AudioConnection          patchCord232(envelope25, 0, multiply25, 0);
AudioConnection          patchCord233(multiply25, 0, mixer7, 1);
AudioConnection          patchCord234(multiply26, 0, mixer7, 2);
AudioConnection          patchCord235(multiply27, 0, mixer7, 3);
AudioConnection          patchCord236(multiply28, 0, mixer8, 0);
AudioConnection          patchCord237(multiply29, 0, mixer8, 1);
AudioConnection          patchCord238(multiply30, 0, mixer8, 2);
AudioConnection          patchCord239(multiply31, 0, mixer8, 3);
AudioConnection          patchCord240(multiply32, 0, mixer11, 1);
AudioConnection          patchCord241(mixer1, 0, mixer9, 0);
AudioConnection          patchCord242(mixer2, 0, mixer9, 1);
AudioConnection          patchCord243(mixer3, 0, mixer9, 2);
AudioConnection          patchCord244(mixer7, 0, mixer10, 2);
AudioConnection          patchCord245(mixer4, 0, mixer9, 3);
AudioConnection          patchCord246(mixer5, 0, mixer10, 0);
AudioConnection          patchCord247(mixer6, 0, mixer10, 1);
AudioConnection          patchCord248(mixer8, 0, mixer10, 3);
AudioConnection          patchCord249(mixer9, 0, finalMix, 0);
AudioConnection          patchCord250(mixer11, 0, finalMix, 2);
AudioConnection          patchCord251(mixer10, 0, finalMix, 1);
//AudioConnection          patchCord252(finalMix, 0, i2s2, 0);
AudioControlSGTL5000     sgtl5000_1;     //xy=594.5000686645508,1960.8334560394287
AudioMixer4              outputAmp;
AudioConnection          patchCord253(finalMix, 0, outputAmp, 0);
AudioConnection          patchCord254(finalMix,0, i2s2, 0);
// GUItool: end automatically generated code

#define SIBILANCEFREQ 5000
#define LOWFREQ 200

float FILTER_Q[33] = {
  1.00, //1
  4.4, //2
  5.4, //3
  6.4, //4
  7.4, //5
  8.4, //6
  9.4, //7
  10.4, //8
  11.4, //9
  12.4, //10
  13.4, //11
  14.4, //12
  15.4, //13
  16.4, //14
  17.4, //15
  18.3, //16
  19.4, //17
  20.4, //18
  21.4, //19
  22.4, //20
  23.4, //21
  24.4, //22
  25.4, //23
  26.4, //24
  27.4, //25
  28.4, //26
  29.4, //27
  30.4, //28
  31.4, //29
  32.4, //30
  33.4, //31
  34.4, //32
  35.4
};

int FILTERFREQ[32] = {
  500,  //1
  613,  //2
  726,  //3
  839,  //4
  952,  //5
  1065, //6
  1178, //7
  1291, //8
  1404, //9
  1517, //10
  1630, //11
  1743, //12
  1856, //13
  1969, //14
  2082, //15
  2195, //16
  2308, //17
  2421, //18
  2534, //19
  2647, //20
  2760, //21
  2873, //22
  2986, //23
  3099, //24
  3212, //25
  3325, //26
  3438, //27
  3551, //28
  3664, //29 
  3777, //30
  3890, //31
  4000, //32
};


void setup() {
  AudioMemory(64);
  sgtl5000_1.enable();
  sgtl5000_1.inputSelect(AUDIO_INPUT_LINEIN );
  sgtl5000_1.lineInLevel(5);
  sgtl5000_1.adcHighPassFilterDisable();
  sgtl5000_1.audioProcessorDisable();
  sgtl5000_1.muteHeadphone();
  sgtl5000_1.unmuteLineout();
  sgtl5000_1.lineOutLevel(13);

  mic_in.gain(0, 0.75);
  instrument_in.gain(0, 2);

  mixer1.gain(0, 1); //0
  mixer1.gain(1, 1); //1
  mixer1.gain(2, 1); //2
  mixer1.gain(3, 1); //3
  mixer2.gain(0, 1); //4
  mixer2.gain(1, 1); //5
  mixer2.gain(2, 1); //6
  mixer2.gain(3, 1); //7
  mixer3.gain(0, 1); //8
  mixer3.gain(1, 1); //9
  mixer3.gain(2, 1); //10
  mixer3.gain(3, 1); //11
  mixer4.gain(0, 1); //12
  mixer4.gain(1, 1); //13
  mixer4.gain(2, 1); //14
  mixer4.gain(3, 1); //15
  mixer5.gain(0, 1); //16
  mixer5.gain(1, 1); //17
  mixer5.gain(2, 1); //18
  mixer5.gain(3, 1); //19
  mixer6.gain(0, 1); //20
  mixer6.gain(1, 1); //21
  mixer6.gain(2, 1); //22
  mixer6.gain(3, 1); //23
  mixer7.gain(0, 1); //24
  mixer7.gain(1, 1); //25
  mixer7.gain(2, 1); //26
  mixer7.gain(3, 1); //27
  mixer8.gain(0, 1); //28
  mixer8.gain(1, 1); //29
  mixer8.gain(2, 1); //30
  mixer8.gain(3, 1); //31
  mixer9.gain(0, 1); 
  mixer9.gain(1, 1); 
  mixer9.gain(2, 1);
  mixer9.gain(3, 1);
  mixer10.gain(0, 1);
  mixer10.gain(1, 1);
  mixer10.gain(2, 1);
  mixer10.gain(3, 1);
  mixer11.gain(0, 1); //white noise - sibilance
  mixer11.gain(1, 1); //32
  finalMix.gain(0, 5);
  finalMix.gain(1, 5);
  finalMix.gain(2, 5);
  outputAmp.gain(1, 12);

  noiseFilter.setLowpass(0, 8000, 0.7);
  noiseFilter.setLowpass(1, 8000, 0.7);
  noiseFilter.setHighpass(2, 5000, 0.7);
  noiseFilter.setHighpass(3, 5000, 0.7);
  
  voice0_2.resonance(0.5);
  voice0_2.frequency(LOWFREQ);
  
  voice1.setBandpass(0, FILTERFREQ[0], FILTER_Q[0]);  
  voice1.setBandpass(1, FILTERFREQ[0], FILTER_Q[0]);
  voice1.setBandpass(2, FILTERFREQ[0], FILTER_Q[0]);
  voice1.setBandpass(3, FILTERFREQ[0], FILTER_Q[0]);

  voice2.setBandpass(0, FILTERFREQ[1], FILTER_Q[1]);
  voice2.setBandpass(1, FILTERFREQ[1], FILTER_Q[1]);
  voice2.setBandpass(2, FILTERFREQ[1], FILTER_Q[1]);
  voice2.setBandpass(3, FILTERFREQ[1], FILTER_Q[1]);

  voice3.setBandpass(0, FILTERFREQ[2], FILTER_Q[2]);
  voice3.setBandpass(1, FILTERFREQ[2], FILTER_Q[2]);
  voice3.setBandpass(2, FILTERFREQ[2], FILTER_Q[2]);
  voice3.setBandpass(3, FILTERFREQ[2], FILTER_Q[2]);

  voice4.setBandpass(0, FILTERFREQ[3], FILTER_Q[3]);
  voice4.setBandpass(1, FILTERFREQ[3], FILTER_Q[3]);
  voice4.setBandpass(2, FILTERFREQ[3], FILTER_Q[3]);
  voice4.setBandpass(3, FILTERFREQ[3], FILTER_Q[3]);

  voice5.setBandpass(0, FILTERFREQ[4], FILTER_Q[4]);
  voice5.setBandpass(1, FILTERFREQ[4], FILTER_Q[4]);
  voice5.setBandpass(2, FILTERFREQ[4], FILTER_Q[4]);
  voice5.setBandpass(3, FILTERFREQ[4], FILTER_Q[4]);

  voice6.setBandpass(0, FILTERFREQ[5], FILTER_Q[5]);
  voice6.setBandpass(1, FILTERFREQ[5], FILTER_Q[5]);
  voice6.setBandpass(2, FILTERFREQ[5], FILTER_Q[5]);
  voice6.setBandpass(3, FILTERFREQ[5], FILTER_Q[5]);

  voice7.setBandpass(0, FILTERFREQ[6], FILTER_Q[6]);
  voice7.setBandpass(1, FILTERFREQ[6], FILTER_Q[6]);
  voice7.setBandpass(2, FILTERFREQ[6], FILTER_Q[6]);
  voice7.setBandpass(3, FILTERFREQ[6], FILTER_Q[6]);

  voice8.setBandpass(0, FILTERFREQ[7], FILTER_Q[7]);
  voice8.setBandpass(1, FILTERFREQ[7], FILTER_Q[7]);
  voice8.setBandpass(2, FILTERFREQ[7], FILTER_Q[7]);
  voice8.setBandpass(3, FILTERFREQ[7], FILTER_Q[7]);

  voice9.setBandpass(0, FILTERFREQ[8], FILTER_Q[8]);
  voice9.setBandpass(1, FILTERFREQ[8], FILTER_Q[8]);
  voice9.setBandpass(2, FILTERFREQ[8], FILTER_Q[8]);
  voice9.setBandpass(3, FILTERFREQ[8], FILTER_Q[8]);

  voice10.setBandpass(0, FILTERFREQ[9], FILTER_Q[9]);
  voice10.setBandpass(1, FILTERFREQ[9], FILTER_Q[9]);
  voice10.setBandpass(2, FILTERFREQ[9], FILTER_Q[9]);
  voice10.setBandpass(3, FILTERFREQ[9], FILTER_Q[9]);

  voice11.setBandpass(0, FILTERFREQ[10], FILTER_Q[10]);
  voice11.setBandpass(1, FILTERFREQ[10], FILTER_Q[10]);
  voice11.setBandpass(2, FILTERFREQ[10], FILTER_Q[10]);
  voice11.setBandpass(3, FILTERFREQ[10], FILTER_Q[10]);

  voice12.setBandpass(0, FILTERFREQ[11], FILTER_Q[11]);
  voice12.setBandpass(1, FILTERFREQ[11], FILTER_Q[11]);
  voice12.setBandpass(2, FILTERFREQ[11], FILTER_Q[11]);
  voice12.setBandpass(3, FILTERFREQ[11], FILTER_Q[11]);

  voice13.setBandpass(0, FILTERFREQ[12], FILTER_Q[12]);
  voice13.setBandpass(1, FILTERFREQ[12], FILTER_Q[12]);
  voice13.setBandpass(2, FILTERFREQ[12], FILTER_Q[12]);
  voice13.setBandpass(3, FILTERFREQ[12], FILTER_Q[12]);

  voice14.setBandpass(0, FILTERFREQ[13], FILTER_Q[13]);
  voice14.setBandpass(1, FILTERFREQ[13], FILTER_Q[13]);
  voice14.setBandpass(2, FILTERFREQ[13], FILTER_Q[13]);
  voice14.setBandpass(3, FILTERFREQ[13], FILTER_Q[13]);

  voice15.setBandpass(0, FILTERFREQ[14], FILTER_Q[14]);
  voice15.setBandpass(1, FILTERFREQ[14], FILTER_Q[14]);
  voice15.setBandpass(2, FILTERFREQ[14], FILTER_Q[14]);
  voice15.setBandpass(3, FILTERFREQ[14], FILTER_Q[14]);

  voice16.setBandpass(0, FILTERFREQ[15], FILTER_Q[15]);
  voice16.setBandpass(1, FILTERFREQ[15], FILTER_Q[15]);
  voice16.setBandpass(2, FILTERFREQ[15], FILTER_Q[15]);
  voice16.setBandpass(3, FILTERFREQ[15], FILTER_Q[15]);

  voice17.setBandpass(0, FILTERFREQ[16], FILTER_Q[16]);
  voice17.setBandpass(1, FILTERFREQ[16], FILTER_Q[16]);
  voice17.setBandpass(2, FILTERFREQ[16], FILTER_Q[16]);
  voice17.setBandpass(3, FILTERFREQ[16], FILTER_Q[16]);

  voice18.setBandpass(0, FILTERFREQ[17], FILTER_Q[17]);
  voice18.setBandpass(1, FILTERFREQ[17], FILTER_Q[17]);
  voice18.setBandpass(2, FILTERFREQ[17], FILTER_Q[17]);
  voice18.setBandpass(3, FILTERFREQ[17], FILTER_Q[17]);

  voice19.setBandpass(0, FILTERFREQ[18], FILTER_Q[18]);
  voice19.setBandpass(1, FILTERFREQ[18], FILTER_Q[18]);
  voice19.setBandpass(2, FILTERFREQ[18], FILTER_Q[18]);
  voice19.setBandpass(3, FILTERFREQ[18], FILTER_Q[18]);

  voice20.setBandpass(0, FILTERFREQ[19], FILTER_Q[19]);
  voice20.setBandpass(1, FILTERFREQ[19], FILTER_Q[19]);
  voice20.setBandpass(2, FILTERFREQ[19], FILTER_Q[19]);
  voice20.setBandpass(3, FILTERFREQ[19], FILTER_Q[19]);

  voice21.setBandpass(0, FILTERFREQ[20], FILTER_Q[20]);
  voice21.setBandpass(1, FILTERFREQ[20], FILTER_Q[20]);
  voice21.setBandpass(2, FILTERFREQ[20], FILTER_Q[20]);
  voice21.setBandpass(3, FILTERFREQ[20], FILTER_Q[20]);
  
  voice22.setBandpass(0, FILTERFREQ[21], FILTER_Q[21]);
  voice22.setBandpass(1, FILTERFREQ[21], FILTER_Q[21]);
  voice22.setBandpass(2, FILTERFREQ[21], FILTER_Q[21]);
  voice22.setBandpass(3, FILTERFREQ[21], FILTER_Q[21]);
  
  voice23.setBandpass(0, FILTERFREQ[22], FILTER_Q[22]);
  voice23.setBandpass(1, FILTERFREQ[22], FILTER_Q[22]);
  voice23.setBandpass(2, FILTERFREQ[22], FILTER_Q[22]);
  voice23.setBandpass(3, FILTERFREQ[22], FILTER_Q[22]);
  
  voice24.setBandpass(0, FILTERFREQ[23], FILTER_Q[23]);
  voice24.setBandpass(1, FILTERFREQ[23], FILTER_Q[23]);
  voice24.setBandpass(2, FILTERFREQ[23], FILTER_Q[23]);
  voice24.setBandpass(3, FILTERFREQ[23], FILTER_Q[23]);

  voice25.setBandpass(0, FILTERFREQ[24], FILTER_Q[24]);
  voice25.setBandpass(1, FILTERFREQ[24], FILTER_Q[24]);
  voice25.setBandpass(2, FILTERFREQ[24], FILTER_Q[24]);
  voice25.setBandpass(3, FILTERFREQ[24], FILTER_Q[24]);

  voice26.setBandpass(0, FILTERFREQ[25], FILTER_Q[25]);
  voice26.setBandpass(1, FILTERFREQ[25], FILTER_Q[25]);
  voice26.setBandpass(2, FILTERFREQ[25], FILTER_Q[25]);
  voice26.setBandpass(3, FILTERFREQ[25], FILTER_Q[25]);

  voice27.setBandpass(0, FILTERFREQ[26], FILTER_Q[26]);
  voice27.setBandpass(1, FILTERFREQ[26], FILTER_Q[26]);
  voice27.setBandpass(2, FILTERFREQ[26], FILTER_Q[26]);
  voice27.setBandpass(3, FILTERFREQ[26], FILTER_Q[26]);

  voice28.setBandpass(0, FILTERFREQ[27], FILTER_Q[27]);
  voice28.setBandpass(1, FILTERFREQ[27], FILTER_Q[27]);
  voice28.setBandpass(2, FILTERFREQ[27], FILTER_Q[27]);
  voice28.setBandpass(3, FILTERFREQ[27], FILTER_Q[27]);

  voice29.setBandpass(0, FILTERFREQ[28], FILTER_Q[28]);
  voice29.setBandpass(1, FILTERFREQ[28], FILTER_Q[28]);
  voice29.setBandpass(2, FILTERFREQ[28], FILTER_Q[28]);
  voice29.setBandpass(3, FILTERFREQ[28], FILTER_Q[28]);

  voice30.setBandpass(0, FILTERFREQ[29], FILTER_Q[29]);
  voice30.setBandpass(1, FILTERFREQ[29], FILTER_Q[29]);
  voice30.setBandpass(2, FILTERFREQ[29], FILTER_Q[29]);
  voice30.setBandpass(3, FILTERFREQ[29], FILTER_Q[29]);

  voice31.setBandpass(0, FILTERFREQ[30], FILTER_Q[30]);
  voice31.setBandpass(1, FILTERFREQ[30], FILTER_Q[30]);
  voice31.setBandpass(2, FILTERFREQ[30], FILTER_Q[30]);
  voice31.setBandpass(3, FILTERFREQ[30], FILTER_Q[30]);

  voice32.setBandpass(0, FILTERFREQ[31], FILTER_Q[31]);
  voice32.setBandpass(1, FILTERFREQ[31], FILTER_Q[31]);
  voice32.setBandpass(2, FILTERFREQ[31], FILTER_Q[31]);
  voice32.setBandpass(3, FILTERFREQ[31], FILTER_Q[31]);

  voice33.setHighpass(0, SIBILANCEFREQ, FILTER_Q[32]);
  voice33.setHighpass(1, SIBILANCEFREQ, FILTER_Q[32]);

  instr0.resonance(0.5);
  instr0.frequency(LOWFREQ);
    
  instr1.setBandpass(0, FILTERFREQ[0], FILTER_Q[0]);
  instr1.setBandpass(1, FILTERFREQ[0], FILTER_Q[0]);
  instr1.setBandpass(2, FILTERFREQ[0], FILTER_Q[0]);
  instr1.setBandpass(3, FILTERFREQ[0], FILTER_Q[0]);

  instr2.setBandpass(0, FILTERFREQ[1], FILTER_Q[1]);
  instr2.setBandpass(1, FILTERFREQ[1], FILTER_Q[1]);
  instr2.setBandpass(2, FILTERFREQ[1], FILTER_Q[1]);
  instr2.setBandpass(3, FILTERFREQ[1], FILTER_Q[1]);

  instr3.setBandpass(0, FILTERFREQ[2], FILTER_Q[2]);
  instr3.setBandpass(1, FILTERFREQ[2], FILTER_Q[2]);
  instr3.setBandpass(2, FILTERFREQ[2], FILTER_Q[2]);
  instr3.setBandpass(3, FILTERFREQ[2], FILTER_Q[2]);

  instr4.setBandpass(0, FILTERFREQ[3], FILTER_Q[3]);
  instr4.setBandpass(1, FILTERFREQ[3], FILTER_Q[3]);
  instr4.setBandpass(2, FILTERFREQ[3], FILTER_Q[3]);
  instr4.setBandpass(3, FILTERFREQ[3], FILTER_Q[3]);

  instr5.setBandpass(0, FILTERFREQ[4], FILTER_Q[4]);
  instr5.setBandpass(1, FILTERFREQ[4], FILTER_Q[4]);
  instr5.setBandpass(2, FILTERFREQ[4], FILTER_Q[4]);
  instr5.setBandpass(3, FILTERFREQ[4], FILTER_Q[4]);

  instr6.setBandpass(0, FILTERFREQ[5], FILTER_Q[5]);
  instr6.setBandpass(1, FILTERFREQ[5], FILTER_Q[5]);
  instr6.setBandpass(2, FILTERFREQ[5], FILTER_Q[5]);
  instr6.setBandpass(3, FILTERFREQ[5], FILTER_Q[5]);

  instr7.setBandpass(0, FILTERFREQ[6], FILTER_Q[6]);
  instr7.setBandpass(1, FILTERFREQ[6], FILTER_Q[6]);
  instr7.setBandpass(2, FILTERFREQ[6], FILTER_Q[6]);
  instr7.setBandpass(3, FILTERFREQ[6], FILTER_Q[6]);

  instr8.setBandpass(0, FILTERFREQ[7], FILTER_Q[7]);
  instr8.setBandpass(1, FILTERFREQ[7], FILTER_Q[7]);
  instr8.setBandpass(2, FILTERFREQ[7], FILTER_Q[7]);
  instr8.setBandpass(3, FILTERFREQ[7], FILTER_Q[7]);

  instr9.setBandpass(0, FILTERFREQ[8], FILTER_Q[8]);
  instr9.setBandpass(1, FILTERFREQ[8], FILTER_Q[8]);
  instr9.setBandpass(2, FILTERFREQ[8], FILTER_Q[8]);
  instr9.setBandpass(3, FILTERFREQ[8], FILTER_Q[8]);

  instr10.setBandpass(0, FILTERFREQ[9], FILTER_Q[9]);
  instr10.setBandpass(1, FILTERFREQ[9], FILTER_Q[9]);
  instr10.setBandpass(2, FILTERFREQ[9], FILTER_Q[9]);
  instr10.setBandpass(3, FILTERFREQ[9], FILTER_Q[9]);

  instr11.setBandpass(0, FILTERFREQ[10], FILTER_Q[10]);
  instr11.setBandpass(1, FILTERFREQ[10], FILTER_Q[10]);
  instr11.setBandpass(2, FILTERFREQ[10], FILTER_Q[10]);
  instr11.setBandpass(3, FILTERFREQ[10], FILTER_Q[10]);

  instr12.setBandpass(0, FILTERFREQ[11], FILTER_Q[11]);
  instr12.setBandpass(1, FILTERFREQ[11], FILTER_Q[11]);
  instr12.setBandpass(2, FILTERFREQ[11], FILTER_Q[11]);
  instr12.setBandpass(3, FILTERFREQ[11], FILTER_Q[11]);

  instr13.setBandpass(0, FILTERFREQ[12], FILTER_Q[12]);
  instr13.setBandpass(1, FILTERFREQ[12], FILTER_Q[12]);
  instr13.setBandpass(2, FILTERFREQ[12], FILTER_Q[12]);
  instr13.setBandpass(3, FILTERFREQ[12], FILTER_Q[12]);

  instr14.setBandpass(0, FILTERFREQ[13], FILTER_Q[13]);
  instr14.setBandpass(1, FILTERFREQ[13], FILTER_Q[13]);
  instr14.setBandpass(2, FILTERFREQ[13], FILTER_Q[13]);
  instr14.setBandpass(3, FILTERFREQ[13], FILTER_Q[13]);

  instr15.setBandpass(0, FILTERFREQ[14], FILTER_Q[14]);
  instr15.setBandpass(1, FILTERFREQ[14], FILTER_Q[14]);
  instr15.setBandpass(2, FILTERFREQ[14], FILTER_Q[14]);
  instr15.setBandpass(3, FILTERFREQ[14], FILTER_Q[14]);

  instr16.setBandpass(0, FILTERFREQ[15], FILTER_Q[15]);
  instr16.setBandpass(1, FILTERFREQ[15], FILTER_Q[15]);
  instr16.setBandpass(2, FILTERFREQ[15], FILTER_Q[15]);
  instr16.setBandpass(3, FILTERFREQ[15], FILTER_Q[15]);

  instr17.setBandpass(0, FILTERFREQ[16], FILTER_Q[16]);
  instr17.setBandpass(1, FILTERFREQ[16], FILTER_Q[16]);
  instr17.setBandpass(2, FILTERFREQ[16], FILTER_Q[16]);
  instr17.setBandpass(3, FILTERFREQ[16], FILTER_Q[16]);

  instr18.setBandpass(0, FILTERFREQ[17], FILTER_Q[17]);
  instr18.setBandpass(1, FILTERFREQ[17], FILTER_Q[17]);
  instr18.setBandpass(2, FILTERFREQ[17], FILTER_Q[17]);
  instr18.setBandpass(3, FILTERFREQ[17], FILTER_Q[17]);

  instr19.setBandpass(0, FILTERFREQ[18], FILTER_Q[18]);
  instr19.setBandpass(1, FILTERFREQ[18], FILTER_Q[18]);
  instr19.setBandpass(2, FILTERFREQ[18], FILTER_Q[18]);
  instr19.setBandpass(3, FILTERFREQ[18], FILTER_Q[18]);

  instr20.setBandpass(0, FILTERFREQ[19], FILTER_Q[19]);
  instr20.setBandpass(1, FILTERFREQ[19], FILTER_Q[19]);
  instr20.setBandpass(2, FILTERFREQ[19], FILTER_Q[19]);
  instr20.setBandpass(3, FILTERFREQ[19], FILTER_Q[19]);

  instr21.setBandpass(0, FILTERFREQ[20], FILTER_Q[20]);
  instr21.setBandpass(1, FILTERFREQ[20], FILTER_Q[20]);
  instr21.setBandpass(2, FILTERFREQ[20], FILTER_Q[20]);
  instr21.setBandpass(3, FILTERFREQ[20], FILTER_Q[20]);
  
  instr22.setBandpass(0, FILTERFREQ[21], FILTER_Q[21]);
  instr22.setBandpass(1, FILTERFREQ[21], FILTER_Q[21]);
  instr22.setBandpass(2, FILTERFREQ[21], FILTER_Q[21]);
  instr22.setBandpass(3, FILTERFREQ[21], FILTER_Q[21]);
  
  instr23.setBandpass(0, FILTERFREQ[22], FILTER_Q[22]);
  instr23.setBandpass(1, FILTERFREQ[22], FILTER_Q[22]);
  instr23.setBandpass(2, FILTERFREQ[22], FILTER_Q[22]);
  instr23.setBandpass(3, FILTERFREQ[22], FILTER_Q[22]);
  
  instr24.setBandpass(0, FILTERFREQ[23], FILTER_Q[23]);
  instr24.setBandpass(1, FILTERFREQ[23], FILTER_Q[23]);
  instr24.setBandpass(2, FILTERFREQ[23], FILTER_Q[23]);
  instr24.setBandpass(3, FILTERFREQ[23], FILTER_Q[23]);

  instr25.setBandpass(0, FILTERFREQ[24], FILTER_Q[24]);
  instr25.setBandpass(1, FILTERFREQ[24], FILTER_Q[24]);
  instr25.setBandpass(2, FILTERFREQ[24], FILTER_Q[24]);
  instr25.setBandpass(3, FILTERFREQ[24], FILTER_Q[24]);

  instr26.setBandpass(0, FILTERFREQ[25], FILTER_Q[25]);
  instr26.setBandpass(1, FILTERFREQ[25], FILTER_Q[25]);
  instr26.setBandpass(2, FILTERFREQ[25], FILTER_Q[25]);
  instr26.setBandpass(3, FILTERFREQ[25], FILTER_Q[25]);

  instr27.setBandpass(0, FILTERFREQ[26], FILTER_Q[26]);
  instr27.setBandpass(1, FILTERFREQ[26], FILTER_Q[26]);
  instr27.setBandpass(2, FILTERFREQ[26], FILTER_Q[26]);
  instr27.setBandpass(3, FILTERFREQ[26], FILTER_Q[26]);

  instr28.setBandpass(0, FILTERFREQ[27], FILTER_Q[27]);
  instr28.setBandpass(1, FILTERFREQ[27], FILTER_Q[27]);
  instr28.setBandpass(2, FILTERFREQ[27], FILTER_Q[27]);
  instr28.setBandpass(3, FILTERFREQ[27], FILTER_Q[27]);

  instr29.setBandpass(0, FILTERFREQ[28], FILTER_Q[28]);
  instr29.setBandpass(1, FILTERFREQ[28], FILTER_Q[28]);
  instr29.setBandpass(2, FILTERFREQ[28], FILTER_Q[28]);
  instr29.setBandpass(3, FILTERFREQ[28], FILTER_Q[28]);

  instr30.setBandpass(0, FILTERFREQ[29], FILTER_Q[29]);
  instr30.setBandpass(1, FILTERFREQ[29], FILTER_Q[29]);
  instr30.setBandpass(2, FILTERFREQ[29], FILTER_Q[29]);
  instr30.setBandpass(3, FILTERFREQ[29], FILTER_Q[29]);

  instr31.setBandpass(0, FILTERFREQ[30], FILTER_Q[30]);
  instr31.setBandpass(1, FILTERFREQ[30], FILTER_Q[30]);
  instr31.setBandpass(2, FILTERFREQ[30], FILTER_Q[30]);
  instr31.setBandpass(3, FILTERFREQ[30], FILTER_Q[30]);

  instr32.setBandpass(0, FILTERFREQ[31], FILTER_Q[31]);
  instr32.setBandpass(1, FILTERFREQ[31], FILTER_Q[31]);
  instr32.setBandpass(2, FILTERFREQ[31], FILTER_Q[31]);
  instr32.setBandpass(3, FILTERFREQ[31], FILTER_Q[31]);

  envelope1.setLowpass(0, 90, 0.53);
  envelope1.setLowpass(1, 90, 0.707);
  envelope1.setLowpass(2, 60, 0.53);
  envelope1.setLowpass(3, 160, 0.707);

  envelope2.setLowpass(0, 200, 0.53);
  envelope2.setLowpass(1, 200, 0.707);
  envelope2.setLowpass(2, 160, 0.707);

  envelope3.setLowpass(0, 200, 0.53);
  envelope3.setLowpass(1, 200, 0.707);
  envelope3.setLowpass(2, 160, 0.707);

  envelope4.setLowpass(0, 200, 0.53);
  envelope4.setLowpass(1, 200, 0.707);
  envelope4.setLowpass(2, 160, 0.707);

  envelope5.setLowpass(0, 200, 0.53);
  envelope5.setLowpass(1, 200, 0.707);
  envelope5.setLowpass(2, 160, 0.707);

  envelope6.setLowpass(0, 200, 0.53);
  envelope6.setLowpass(1, 200, 0.707);
  envelope6.setLowpass(2, 160, 0.707);

  envelope7.setLowpass(0, 200, 0.53);
  envelope7.setLowpass(1, 200, 0.707);
  envelope7.setLowpass(2, 160, 0.707);

  envelope8.setLowpass(0, 200, 0.53);
  envelope8.setLowpass(1, 200, 0.707);
  envelope8.setLowpass(2, 160, 0.707);

  envelope9.setLowpass(0, 200, 0.53);
  envelope9.setLowpass(1, 200, 0.707);
  envelope9.setLowpass(2, 160, 0.707);

  envelope10.setLowpass(0, 200, 0.53);
  envelope10.setLowpass(1, 200, 0.707);
  envelope10.setLowpass(2, 160, 0.707);

  envelope11.setLowpass(0, 200, 0.53);
  envelope11.setLowpass(1, 200, 0.707);
  envelope11.setLowpass(2, 160, 0.707);

  envelope12.setLowpass(0, 300, 0.53);
  envelope12.setLowpass(1, 300, 0.707);
  envelope12.setLowpass(2, 260, 0.707);

  envelope13.setLowpass(0, 200, 0.53);
  envelope13.setLowpass(1, 200, 0.707);
  envelope13.setLowpass(2, 160, 0.707);

  envelope14.setLowpass(0, 300, 0.53);
  envelope14.setLowpass(1, 300, 0.707);
  envelope14.setLowpass(2, 260, 0.707);

  envelope15.setLowpass(0, 300, 0.53);
  envelope15.setLowpass(1, 300, 0.707);
  envelope15.setLowpass(2, 260, 0.707);

  envelope16.setLowpass(0, 300, 0.53);
  envelope16.setLowpass(1, 300, 0.707);
  envelope16.setLowpass(2, 260, 0.707);

  envelope17.setLowpass(0, 300, 0.53);
  envelope17.setLowpass(1, 300, 0.707);
  envelope17.setLowpass(2, 260, 0.707);

  envelope18.setLowpass(0, 300, 0.53);
  envelope18.setLowpass(1, 300, 0.707);
  envelope18.setLowpass(2, 260, 0.707);

  envelope19.setLowpass(0, 300, 0.53);
  envelope19.setLowpass(1, 300, 0.707);
  envelope19.setLowpass(2, 260, 0.707);

  envelope20.setLowpass(0, 200, 0.53);
  envelope20.setLowpass(1, 300, 0.707);
  envelope20.setLowpass(2, 260, 0.707);

  envelope21.setLowpass(0, 300, 0.53);
  envelope21.setLowpass(1, 300, 0.707);
  envelope21.setLowpass(2, 260, 0.707);
  
  envelope22.setLowpass(0, 300, 0.53);
  envelope22.setLowpass(1, 300, 0.707);
  envelope22.setLowpass(2, 260, 0.707);
  
  envelope23.setLowpass(0, 300, 0.53);
  envelope23.setLowpass(1, 300, 0.707);
  envelope23.setLowpass(2, 260, 0.707);

  envelope24.setLowpass(0, 400, 0.53);
  envelope24.setLowpass(1, 400, 0.707);
  envelope24.setLowpass(2, 360, 0.707);

  envelope25.setLowpass(0, 400, 0.53);
  envelope25.setLowpass(1, 400, 0.707);
  envelope25.setLowpass(2, 360, 0.707);

  envelope26.setLowpass(0, 400, 0.53);
  envelope26.setLowpass(1, 400, 0.707);
  envelope26.setLowpass(2, 360, 0.707);

  envelope27.setLowpass(0, 400, 0.53);
  envelope27.setLowpass(1, 400, 0.707);
  envelope27.setLowpass(2, 360, 0.707);

  envelope28.setLowpass(0, 400, 0.53);
  envelope28.setLowpass(1, 400, 0.707);
  envelope28.setLowpass(2, 360, 0.707);

  envelope29.setLowpass(0, 400, 0.53);
  envelope29.setLowpass(1, 400, 0.707);
  envelope29.setLowpass(2, 360, 0.707);

  envelope30.setLowpass(0, 400, 0.53);
  envelope30.setLowpass(1, 400, 0.707);
  envelope30.setLowpass(2, 360, 0.707);

  envelope31.setLowpass(0, 400, 0.53);
  envelope31.setLowpass(1, 400, 0.707);
  envelope31.setLowpass(2, 360, 0.707);

  envelope32.setLowpass(0, 400, 0.53);
  envelope32.setLowpass(1, 400, 0.707);
  envelope32.setLowpass(2, 360, 0.707);

  envelope33.setLowpass(0, 400, 0.53);
  envelope33.setLowpass(1, 400, 0.707);
  envelope33.setLowpass(2, 360, 0.707);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
  delay(250);
}
