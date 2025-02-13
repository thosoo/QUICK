/*
 !---------------------------------------------------------------------!
 ! Written by QUICK-GenInt code generator on 03/25/2023                !
 !                                                                     !
 ! Copyright (C) 2023-2024 Merz lab                                    !
 ! Copyright (C) 2023-2024 Götz lab                                    !
 !                                                                     !
 ! This Source Code Form is subject to the terms of the Mozilla Public !
 ! License, v. 2.0. If a copy of the MPL was not distributed with this !
 ! file, You can obtain one at http://mozilla.org/MPL/2.0/.            !
 !_____________________________________________________________________!
*/

{

    // [PS|HS] integral - Start
    QUICKDouble VY_1 = VY(0, 0, 1);
    QUICKDouble VY_2 = VY(0, 0, 2);
    QUICKDouble x_0_3_1 = Qtempz * VY_1 + WQtempz * VY_2;
    QUICKDouble VY_3 = VY(0, 0, 3);
    QUICKDouble x_0_3_2 = Qtempz * VY_2 + WQtempz * VY_3;
    QUICKDouble VY_4 = VY(0, 0, 4);
    QUICKDouble x_0_3_3 = Qtempz * VY_3 + WQtempz * VY_4;
    QUICKDouble VY_5 = VY(0, 0, 5);
    QUICKDouble x_0_3_4 = Qtempz * VY_4 + WQtempz * VY_5;
    QUICKDouble VY_0 = VY(0, 0, 0);
    QUICKDouble x_0_3_0 = Qtempz * VY_0 + WQtempz * VY_1;
    QUICKDouble VY_6 = VY(0, 0, 6);
    QUICKDouble x_0_3_5 = Qtempz * VY_5 + WQtempz * VY_6;
    QUICKDouble x_0_9_1 = Qtempz * x_0_3_1 + WQtempz * x_0_3_2 + CDtemp * (VY_1 - ABcom * VY_2);
    QUICKDouble x_0_9_2 = Qtempz * x_0_3_2 + WQtempz * x_0_3_3 + CDtemp * (VY_2 - ABcom * VY_3);
    QUICKDouble x_0_9_3 = Qtempz * x_0_3_3 + WQtempz * x_0_3_4 + CDtemp * (VY_3 - ABcom * VY_4);
    QUICKDouble x_0_9_0 = Qtempz * x_0_3_0 + WQtempz * x_0_3_1 + CDtemp * (VY_0 - ABcom * VY_1);
    QUICKDouble x_0_9_4 = Qtempz * x_0_3_4 + WQtempz * x_0_3_5 + CDtemp * (VY_4 - ABcom * VY_5);
    QUICKDouble x_0_5_1 = Qtempy * x_0_3_1 + WQtempy * x_0_3_2;
    QUICKDouble x_0_5_2 = Qtempy * x_0_3_2 + WQtempy * x_0_3_3;
    QUICKDouble x_0_5_3 = Qtempy * x_0_3_3 + WQtempy * x_0_3_4;
    QUICKDouble x_0_16_1 = Qtempy * x_0_9_1 + WQtempy * x_0_9_2;
    QUICKDouble x_0_16_2 = Qtempy * x_0_9_2 + WQtempy * x_0_9_3;
    QUICKDouble x_0_16_0 = Qtempy * x_0_9_0 + WQtempy * x_0_9_1;
    QUICKDouble x_0_16_3 = Qtempy * x_0_9_3 + WQtempy * x_0_9_4;
    QUICKDouble x_0_15_1 = Qtempy * x_0_5_1 + WQtempy * x_0_5_2 + CDtemp * (x_0_3_1 - ABcom * x_0_3_2);
    QUICKDouble x_0_15_2 = Qtempy * x_0_5_2 + WQtempy * x_0_5_3 + CDtemp * (x_0_3_2 - ABcom * x_0_3_3);
    QUICKDouble x_0_22_1 = Qtempy * x_0_16_1 + WQtempy * x_0_16_2 + CDtemp * (x_0_9_1 - ABcom * x_0_9_2);
    QUICKDouble x_0_22_0 = Qtempy * x_0_16_0 + WQtempy * x_0_16_1 + CDtemp * (x_0_9_0 - ABcom * x_0_9_1);
    QUICKDouble x_0_22_2 = Qtempy * x_0_16_2 + WQtempy * x_0_16_3 + CDtemp * (x_0_9_2 - ABcom * x_0_9_3);
    QUICKDouble x_0_24_1 = Qtempx * x_0_15_1 + WQtempx * x_0_15_2;
    QUICKDouble x_0_35_0 = Qtempx * x_0_22_0 + WQtempx * x_0_22_1;
    QUICKDouble x_0_35_1 = Qtempx * x_0_22_1 + WQtempx * x_0_22_2;
    LOCSTORE(store, 3, 35, STOREDIM, STOREDIM) += Ptempz * x_0_35_0 + WPtempz * x_0_35_1 + 2.000000 * ABCDtemp * x_0_24_1;
    QUICKDouble x_0_25_1 = Qtempx * x_0_16_1 + WQtempx * x_0_16_2;
    LOCSTORE(store, 2, 35, STOREDIM, STOREDIM) += Ptempy * x_0_35_0 + WPtempy * x_0_35_1 + 2.000000 * ABCDtemp * x_0_25_1;
    LOCSTORE(store, 1, 35, STOREDIM, STOREDIM) += Ptempx * x_0_35_0 + WPtempx * x_0_35_1 + ABCDtemp * x_0_22_1;
    QUICKDouble x_0_10_1 = Qtempx * x_0_5_1 + WQtempx * x_0_5_2;
    QUICKDouble x_0_10_2 = Qtempx * x_0_5_2 + WQtempx * x_0_5_3;
    QUICKDouble x_0_25_0 = Qtempx * x_0_16_0 + WQtempx * x_0_16_1;
    QUICKDouble x_0_25_2 = Qtempx * x_0_16_2 + WQtempx * x_0_16_3;
    QUICKDouble x_0_23_1 = Qtempx * x_0_10_1 + WQtempx * x_0_10_2 + CDtemp * (x_0_5_1 - ABcom * x_0_5_2);
    QUICKDouble x_0_36_0 = Qtempx * x_0_25_0 + WQtempx * x_0_25_1 + CDtemp * (x_0_16_0 - ABcom * x_0_16_1);
    QUICKDouble x_0_36_1 = Qtempx * x_0_25_1 + WQtempx * x_0_25_2 + CDtemp * (x_0_16_1 - ABcom * x_0_16_2);
    LOCSTORE(store, 3, 36, STOREDIM, STOREDIM) += Ptempz * x_0_36_0 + WPtempz * x_0_36_1 + 2.000000 * ABCDtemp * x_0_23_1;
    QUICKDouble x_0_14_1 = Qtempx * x_0_9_1 + WQtempx * x_0_9_2;
    QUICKDouble x_0_14_2 = Qtempx * x_0_9_2 + WQtempx * x_0_9_3;
    QUICKDouble x_0_21_1 = Qtempx * x_0_14_1 + WQtempx * x_0_14_2 + CDtemp * (x_0_9_1 - ABcom * x_0_9_2);
    LOCSTORE(store, 2, 36, STOREDIM, STOREDIM) += Ptempy * x_0_36_0 + WPtempy * x_0_36_1 + ABCDtemp * x_0_21_1;
    LOCSTORE(store, 1, 36, STOREDIM, STOREDIM) += Ptempx * x_0_36_0 + WPtempx * x_0_36_1 + 2.000000 * ABCDtemp * x_0_25_1;
    QUICKDouble x_0_2_1 = Qtempy * VY_1 + WQtempy * VY_2;
    QUICKDouble x_0_2_2 = Qtempy * VY_2 + WQtempy * VY_3;
    QUICKDouble x_0_2_3 = Qtempy * VY_3 + WQtempy * VY_4;
    QUICKDouble x_0_2_4 = Qtempy * VY_4 + WQtempy * VY_5;
    QUICKDouble x_0_5_0 = Qtempy * x_0_3_0 + WQtempy * x_0_3_1;
    QUICKDouble x_0_5_4 = Qtempy * x_0_3_4 + WQtempy * x_0_3_5;
    QUICKDouble x_0_8_1 = Qtempy * x_0_2_1 + WQtempy * x_0_2_2 + CDtemp * (VY_1 - ABcom * VY_2);
    QUICKDouble x_0_8_2 = Qtempy * x_0_2_2 + WQtempy * x_0_2_3 + CDtemp * (VY_2 - ABcom * VY_3);
    QUICKDouble x_0_8_3 = Qtempy * x_0_2_3 + WQtempy * x_0_2_4 + CDtemp * (VY_3 - ABcom * VY_4);
    QUICKDouble x_0_15_0 = Qtempy * x_0_5_0 + WQtempy * x_0_5_1 + CDtemp * (x_0_3_0 - ABcom * x_0_3_1);
    QUICKDouble x_0_15_3 = Qtempy * x_0_5_3 + WQtempy * x_0_5_4 + CDtemp * (x_0_3_3 - ABcom * x_0_3_4);
    QUICKDouble x_0_12_1 = Qtempx * x_0_8_1 + WQtempx * x_0_8_2;
    QUICKDouble x_0_12_2 = Qtempx * x_0_8_2 + WQtempx * x_0_8_3;
    QUICKDouble x_0_24_0 = Qtempx * x_0_15_0 + WQtempx * x_0_15_1;
    QUICKDouble x_0_24_2 = Qtempx * x_0_15_2 + WQtempx * x_0_15_3;
    QUICKDouble x_0_20_1 = Qtempx * x_0_12_1 + WQtempx * x_0_12_2 + CDtemp * (x_0_8_1 - ABcom * x_0_8_2);
    QUICKDouble x_0_37_0 = Qtempx * x_0_24_0 + WQtempx * x_0_24_1 + CDtemp * (x_0_15_0 - ABcom * x_0_15_1);
    QUICKDouble x_0_37_1 = Qtempx * x_0_24_1 + WQtempx * x_0_24_2 + CDtemp * (x_0_15_1 - ABcom * x_0_15_2);
    LOCSTORE(store, 3, 37, STOREDIM, STOREDIM) += Ptempz * x_0_37_0 + WPtempz * x_0_37_1 + ABCDtemp * x_0_20_1;
    LOCSTORE(store, 2, 37, STOREDIM, STOREDIM) += Ptempy * x_0_37_0 + WPtempy * x_0_37_1 + 2.000000 * ABCDtemp * x_0_23_1;
    LOCSTORE(store, 1, 37, STOREDIM, STOREDIM) += Ptempx * x_0_37_0 + WPtempx * x_0_37_1 + 2.000000 * ABCDtemp * x_0_24_1;
    QUICKDouble x_0_4_1 = Qtempx * x_0_2_1 + WQtempx * x_0_2_2;
    QUICKDouble x_0_4_2 = Qtempx * x_0_2_2 + WQtempx * x_0_2_3;
    QUICKDouble x_0_4_3 = Qtempx * x_0_2_3 + WQtempx * x_0_2_4;
    QUICKDouble x_0_10_0 = Qtempx * x_0_5_0 + WQtempx * x_0_5_1;
    QUICKDouble x_0_10_3 = Qtempx * x_0_5_3 + WQtempx * x_0_5_4;
    QUICKDouble x_0_11_1 = Qtempx * x_0_4_1 + WQtempx * x_0_4_2 + CDtemp * (x_0_2_1 - ABcom * x_0_2_2);
    QUICKDouble x_0_11_2 = Qtempx * x_0_4_2 + WQtempx * x_0_4_3 + CDtemp * (x_0_2_2 - ABcom * x_0_2_3);
    QUICKDouble x_0_23_0 = Qtempx * x_0_10_0 + WQtempx * x_0_10_1 + CDtemp * (x_0_5_0 - ABcom * x_0_5_1);
    QUICKDouble x_0_23_2 = Qtempx * x_0_10_2 + WQtempx * x_0_10_3 + CDtemp * (x_0_5_2 - ABcom * x_0_5_3);
    QUICKDouble x_0_28_1 = Qtempx * x_0_11_1 + WQtempx * x_0_11_2 + 2.000000 * CDtemp * (x_0_4_1 - ABcom * x_0_4_2);
    QUICKDouble x_0_38_0 = Qtempx * x_0_23_0 + WQtempx * x_0_23_1 + 2.000000 * CDtemp * (x_0_10_0 - ABcom * x_0_10_1);
    QUICKDouble x_0_38_1 = Qtempx * x_0_23_1 + WQtempx * x_0_23_2 + 2.000000 * CDtemp * (x_0_10_1 - ABcom * x_0_10_2);
    LOCSTORE(store, 3, 38, STOREDIM, STOREDIM) += Ptempz * x_0_38_0 + WPtempz * x_0_38_1 + ABCDtemp * x_0_28_1;
    QUICKDouble x_0_6_1 = Qtempx * x_0_3_1 + WQtempx * x_0_3_2;
    QUICKDouble x_0_6_2 = Qtempx * x_0_3_2 + WQtempx * x_0_3_3;
    QUICKDouble x_0_6_3 = Qtempx * x_0_3_3 + WQtempx * x_0_3_4;
    QUICKDouble x_0_13_1 = Qtempx * x_0_6_1 + WQtempx * x_0_6_2 + CDtemp * (x_0_3_1 - ABcom * x_0_3_2);
    QUICKDouble x_0_13_2 = Qtempx * x_0_6_2 + WQtempx * x_0_6_3 + CDtemp * (x_0_3_2 - ABcom * x_0_3_3);
    QUICKDouble x_0_26_1 = Qtempx * x_0_13_1 + WQtempx * x_0_13_2 + 2.000000 * CDtemp * (x_0_6_1 - ABcom * x_0_6_2);
    LOCSTORE(store, 2, 38, STOREDIM, STOREDIM) += Ptempy * x_0_38_0 + WPtempy * x_0_38_1 + ABCDtemp * x_0_26_1;
    LOCSTORE(store, 1, 38, STOREDIM, STOREDIM) += Ptempx * x_0_38_0 + WPtempx * x_0_38_1 + 3.000000 * ABCDtemp * x_0_23_1;
    QUICKDouble x_0_18_1 = Qtempy * x_0_8_1 + WQtempy * x_0_8_2 + 2.000000 * CDtemp * (x_0_2_1 - ABcom * x_0_2_2);
    QUICKDouble x_0_18_2 = Qtempy * x_0_8_2 + WQtempy * x_0_8_3 + 2.000000 * CDtemp * (x_0_2_2 - ABcom * x_0_2_3);
    QUICKDouble x_0_30_1 = Qtempy * x_0_15_1 + WQtempy * x_0_15_2 + 2.000000 * CDtemp * (x_0_5_1 - ABcom * x_0_5_2);
    QUICKDouble x_0_30_0 = Qtempy * x_0_15_0 + WQtempy * x_0_15_1 + 2.000000 * CDtemp * (x_0_5_0 - ABcom * x_0_5_1);
    QUICKDouble x_0_30_2 = Qtempy * x_0_15_2 + WQtempy * x_0_15_3 + 2.000000 * CDtemp * (x_0_5_2 - ABcom * x_0_5_3);
    QUICKDouble x_0_29_1 = Qtempx * x_0_18_1 + WQtempx * x_0_18_2;
    QUICKDouble x_0_39_0 = Qtempx * x_0_30_0 + WQtempx * x_0_30_1;
    QUICKDouble x_0_39_1 = Qtempx * x_0_30_1 + WQtempx * x_0_30_2;
    LOCSTORE(store, 3, 39, STOREDIM, STOREDIM) += Ptempz * x_0_39_0 + WPtempz * x_0_39_1 + ABCDtemp * x_0_29_1;
    LOCSTORE(store, 2, 39, STOREDIM, STOREDIM) += Ptempy * x_0_39_0 + WPtempy * x_0_39_1 + 3.000000 * ABCDtemp * x_0_24_1;
    LOCSTORE(store, 1, 39, STOREDIM, STOREDIM) += Ptempx * x_0_39_0 + WPtempx * x_0_39_1 + ABCDtemp * x_0_30_1;
    QUICKDouble x_0_19_1 = Qtempz * x_0_9_1 + WQtempz * x_0_9_2 + 2.000000 * CDtemp * (x_0_3_1 - ABcom * x_0_3_2);
    QUICKDouble x_0_19_2 = Qtempz * x_0_9_2 + WQtempz * x_0_9_3 + 2.000000 * CDtemp * (x_0_3_2 - ABcom * x_0_3_3);
    QUICKDouble x_0_19_0 = Qtempz * x_0_9_0 + WQtempz * x_0_9_1 + 2.000000 * CDtemp * (x_0_3_0 - ABcom * x_0_3_1);
    QUICKDouble x_0_19_3 = Qtempz * x_0_9_3 + WQtempz * x_0_9_4 + 2.000000 * CDtemp * (x_0_3_3 - ABcom * x_0_3_4);
    QUICKDouble x_0_31_1 = Qtempy * x_0_19_1 + WQtempy * x_0_19_2;
    QUICKDouble x_0_31_0 = Qtempy * x_0_19_0 + WQtempy * x_0_19_1;
    QUICKDouble x_0_31_2 = Qtempy * x_0_19_2 + WQtempy * x_0_19_3;
    QUICKDouble x_0_40_0 = Qtempx * x_0_31_0 + WQtempx * x_0_31_1;
    QUICKDouble x_0_40_1 = Qtempx * x_0_31_1 + WQtempx * x_0_31_2;
    LOCSTORE(store, 3, 40, STOREDIM, STOREDIM) += Ptempz * x_0_40_0 + WPtempz * x_0_40_1 + 3.000000 * ABCDtemp * x_0_25_1;
    QUICKDouble x_0_27_1 = Qtempx * x_0_19_1 + WQtempx * x_0_19_2;
    LOCSTORE(store, 2, 40, STOREDIM, STOREDIM) += Ptempy * x_0_40_0 + WPtempy * x_0_40_1 + ABCDtemp * x_0_27_1;
    LOCSTORE(store, 1, 40, STOREDIM, STOREDIM) += Ptempx * x_0_40_0 + WPtempx * x_0_40_1 + ABCDtemp * x_0_31_1;
    QUICKDouble x_0_41_0 = Qtempy * x_0_31_0 + WQtempy * x_0_31_1 + CDtemp * (x_0_19_0 - ABcom * x_0_19_1);
    QUICKDouble x_0_41_1 = Qtempy * x_0_31_1 + WQtempy * x_0_31_2 + CDtemp * (x_0_19_1 - ABcom * x_0_19_2);
    LOCSTORE(store, 3, 41, STOREDIM, STOREDIM) += Ptempz * x_0_41_0 + WPtempz * x_0_41_1 + 3.000000 * ABCDtemp * x_0_22_1;
    LOCSTORE(store, 2, 41, STOREDIM, STOREDIM) += Ptempy * x_0_41_0 + WPtempy * x_0_41_1 + 2.000000 * ABCDtemp * x_0_31_1;
    LOCSTORE(store, 1, 41, STOREDIM, STOREDIM) += Ptempx * x_0_41_0 + WPtempx * x_0_41_1;
    QUICKDouble x_0_42_0 = Qtempy * x_0_22_0 + WQtempy * x_0_22_1 + 2.000000 * CDtemp * (x_0_16_0 - ABcom * x_0_16_1);
    QUICKDouble x_0_42_1 = Qtempy * x_0_22_1 + WQtempy * x_0_22_2 + 2.000000 * CDtemp * (x_0_16_1 - ABcom * x_0_16_2);
    LOCSTORE(store, 3, 42, STOREDIM, STOREDIM) += Ptempz * x_0_42_0 + WPtempz * x_0_42_1 + 2.000000 * ABCDtemp * x_0_30_1;
    LOCSTORE(store, 2, 42, STOREDIM, STOREDIM) += Ptempy * x_0_42_0 + WPtempy * x_0_42_1 + 3.000000 * ABCDtemp * x_0_22_1;
    LOCSTORE(store, 1, 42, STOREDIM, STOREDIM) += Ptempx * x_0_42_0 + WPtempx * x_0_42_1;
    QUICKDouble x_0_27_0 = Qtempx * x_0_19_0 + WQtempx * x_0_19_1;
    QUICKDouble x_0_27_2 = Qtempx * x_0_19_2 + WQtempx * x_0_19_3;
    QUICKDouble x_0_43_0 = Qtempx * x_0_27_0 + WQtempx * x_0_27_1 + CDtemp * (x_0_19_0 - ABcom * x_0_19_1);
    QUICKDouble x_0_43_1 = Qtempx * x_0_27_1 + WQtempx * x_0_27_2 + CDtemp * (x_0_19_1 - ABcom * x_0_19_2);
    LOCSTORE(store, 3, 43, STOREDIM, STOREDIM) += Ptempz * x_0_43_0 + WPtempz * x_0_43_1 + 3.000000 * ABCDtemp * x_0_21_1;
    LOCSTORE(store, 2, 43, STOREDIM, STOREDIM) += Ptempy * x_0_43_0 + WPtempy * x_0_43_1;
    LOCSTORE(store, 1, 43, STOREDIM, STOREDIM) += Ptempx * x_0_43_0 + WPtempx * x_0_43_1 + 2.000000 * ABCDtemp * x_0_27_1;
    QUICKDouble x_0_14_0 = Qtempx * x_0_9_0 + WQtempx * x_0_9_1;
    QUICKDouble x_0_14_3 = Qtempx * x_0_9_3 + WQtempx * x_0_9_4;
    QUICKDouble x_0_21_0 = Qtempx * x_0_14_0 + WQtempx * x_0_14_1 + CDtemp * (x_0_9_0 - ABcom * x_0_9_1);
    QUICKDouble x_0_21_2 = Qtempx * x_0_14_2 + WQtempx * x_0_14_3 + CDtemp * (x_0_9_2 - ABcom * x_0_9_3);
    QUICKDouble x_0_44_0 = Qtempx * x_0_21_0 + WQtempx * x_0_21_1 + 2.000000 * CDtemp * (x_0_14_0 - ABcom * x_0_14_1);
    QUICKDouble x_0_44_1 = Qtempx * x_0_21_1 + WQtempx * x_0_21_2 + 2.000000 * CDtemp * (x_0_14_1 - ABcom * x_0_14_2);
    LOCSTORE(store, 3, 44, STOREDIM, STOREDIM) += Ptempz * x_0_44_0 + WPtempz * x_0_44_1 + 2.000000 * ABCDtemp * x_0_26_1;
    LOCSTORE(store, 2, 44, STOREDIM, STOREDIM) += Ptempy * x_0_44_0 + WPtempy * x_0_44_1;
    LOCSTORE(store, 1, 44, STOREDIM, STOREDIM) += Ptempx * x_0_44_0 + WPtempx * x_0_44_1 + 3.000000 * ABCDtemp * x_0_21_1;
    QUICKDouble x_0_2_0 = Qtempy * VY_0 + WQtempy * VY_1;
    QUICKDouble x_0_2_5 = Qtempy * VY_5 + WQtempy * VY_6;
    QUICKDouble x_0_8_0 = Qtempy * x_0_2_0 + WQtempy * x_0_2_1 + CDtemp * (VY_0 - ABcom * VY_1);
    QUICKDouble x_0_8_4 = Qtempy * x_0_2_4 + WQtempy * x_0_2_5 + CDtemp * (VY_4 - ABcom * VY_5);
    QUICKDouble x_0_18_0 = Qtempy * x_0_8_0 + WQtempy * x_0_8_1 + 2.000000 * CDtemp * (x_0_2_0 - ABcom * x_0_2_1);
    QUICKDouble x_0_18_3 = Qtempy * x_0_8_3 + WQtempy * x_0_8_4 + 2.000000 * CDtemp * (x_0_2_3 - ABcom * x_0_2_4);
    QUICKDouble x_0_29_0 = Qtempx * x_0_18_0 + WQtempx * x_0_18_1;
    QUICKDouble x_0_29_2 = Qtempx * x_0_18_2 + WQtempx * x_0_18_3;
    QUICKDouble x_0_45_0 = Qtempx * x_0_29_0 + WQtempx * x_0_29_1 + CDtemp * (x_0_18_0 - ABcom * x_0_18_1);
    QUICKDouble x_0_45_1 = Qtempx * x_0_29_1 + WQtempx * x_0_29_2 + CDtemp * (x_0_18_1 - ABcom * x_0_18_2);
    LOCSTORE(store, 3, 45, STOREDIM, STOREDIM) += Ptempz * x_0_45_0 + WPtempz * x_0_45_1;
    LOCSTORE(store, 2, 45, STOREDIM, STOREDIM) += Ptempy * x_0_45_0 + WPtempy * x_0_45_1 + 3.000000 * ABCDtemp * x_0_20_1;
    LOCSTORE(store, 1, 45, STOREDIM, STOREDIM) += Ptempx * x_0_45_0 + WPtempx * x_0_45_1 + 2.000000 * ABCDtemp * x_0_29_1;
    QUICKDouble x_0_12_0 = Qtempx * x_0_8_0 + WQtempx * x_0_8_1;
    QUICKDouble x_0_12_3 = Qtempx * x_0_8_3 + WQtempx * x_0_8_4;
    QUICKDouble x_0_20_0 = Qtempx * x_0_12_0 + WQtempx * x_0_12_1 + CDtemp * (x_0_8_0 - ABcom * x_0_8_1);
    QUICKDouble x_0_20_2 = Qtempx * x_0_12_2 + WQtempx * x_0_12_3 + CDtemp * (x_0_8_2 - ABcom * x_0_8_3);
    QUICKDouble x_0_46_0 = Qtempx * x_0_20_0 + WQtempx * x_0_20_1 + 2.000000 * CDtemp * (x_0_12_0 - ABcom * x_0_12_1);
    QUICKDouble x_0_46_1 = Qtempx * x_0_20_1 + WQtempx * x_0_20_2 + 2.000000 * CDtemp * (x_0_12_1 - ABcom * x_0_12_2);
    LOCSTORE(store, 3, 46, STOREDIM, STOREDIM) += Ptempz * x_0_46_0 + WPtempz * x_0_46_1;
    LOCSTORE(store, 2, 46, STOREDIM, STOREDIM) += Ptempy * x_0_46_0 + WPtempy * x_0_46_1 + 2.000000 * ABCDtemp * x_0_28_1;
    LOCSTORE(store, 1, 46, STOREDIM, STOREDIM) += Ptempx * x_0_46_0 + WPtempx * x_0_46_1 + 3.000000 * ABCDtemp * x_0_20_1;
    QUICKDouble x_0_34_1 = Qtempz * x_0_19_1 + WQtempz * x_0_19_2 + 3.000000 * CDtemp * (x_0_9_1 - ABcom * x_0_9_2);
    QUICKDouble x_0_34_0 = Qtempz * x_0_19_0 + WQtempz * x_0_19_1 + 3.000000 * CDtemp * (x_0_9_0 - ABcom * x_0_9_1);
    QUICKDouble x_0_34_2 = Qtempz * x_0_19_2 + WQtempz * x_0_19_3 + 3.000000 * CDtemp * (x_0_9_2 - ABcom * x_0_9_3);
    QUICKDouble x_0_47_0 = Qtempy * x_0_34_0 + WQtempy * x_0_34_1;
    QUICKDouble x_0_47_1 = Qtempy * x_0_34_1 + WQtempy * x_0_34_2;
    LOCSTORE(store, 3, 47, STOREDIM, STOREDIM) += Ptempz * x_0_47_0 + WPtempz * x_0_47_1 + 4.000000 * ABCDtemp * x_0_31_1;
    LOCSTORE(store, 2, 47, STOREDIM, STOREDIM) += Ptempy * x_0_47_0 + WPtempy * x_0_47_1 + ABCDtemp * x_0_34_1;
    LOCSTORE(store, 1, 47, STOREDIM, STOREDIM) += Ptempx * x_0_47_0 + WPtempx * x_0_47_1;
    QUICKDouble x_0_33_1 = Qtempy * x_0_18_1 + WQtempy * x_0_18_2 + 3.000000 * CDtemp * (x_0_8_1 - ABcom * x_0_8_2);
    QUICKDouble x_0_48_0 = Qtempy * x_0_30_0 + WQtempy * x_0_30_1 + 3.000000 * CDtemp * (x_0_15_0 - ABcom * x_0_15_1);
    QUICKDouble x_0_48_1 = Qtempy * x_0_30_1 + WQtempy * x_0_30_2 + 3.000000 * CDtemp * (x_0_15_1 - ABcom * x_0_15_2);
    LOCSTORE(store, 3, 48, STOREDIM, STOREDIM) += Ptempz * x_0_48_0 + WPtempz * x_0_48_1 + ABCDtemp * x_0_33_1;
    LOCSTORE(store, 2, 48, STOREDIM, STOREDIM) += Ptempy * x_0_48_0 + WPtempy * x_0_48_1 + 4.000000 * ABCDtemp * x_0_30_1;
    LOCSTORE(store, 1, 48, STOREDIM, STOREDIM) += Ptempx * x_0_48_0 + WPtempx * x_0_48_1;
    QUICKDouble x_0_49_0 = Qtempx * x_0_34_0 + WQtempx * x_0_34_1;
    QUICKDouble x_0_49_1 = Qtempx * x_0_34_1 + WQtempx * x_0_34_2;
    LOCSTORE(store, 3, 49, STOREDIM, STOREDIM) += Ptempz * x_0_49_0 + WPtempz * x_0_49_1 + 4.000000 * ABCDtemp * x_0_27_1;
    LOCSTORE(store, 2, 49, STOREDIM, STOREDIM) += Ptempy * x_0_49_0 + WPtempy * x_0_49_1;
    LOCSTORE(store, 1, 49, STOREDIM, STOREDIM) += Ptempx * x_0_49_0 + WPtempx * x_0_49_1 + ABCDtemp * x_0_34_1;
    QUICKDouble x_0_1_1 = Qtempx * VY_1 + WQtempx * VY_2;
    QUICKDouble x_0_1_2 = Qtempx * VY_2 + WQtempx * VY_3;
    QUICKDouble x_0_1_3 = Qtempx * VY_3 + WQtempx * VY_4;
    QUICKDouble x_0_1_4 = Qtempx * VY_4 + WQtempx * VY_5;
    QUICKDouble x_0_6_0 = Qtempx * x_0_3_0 + WQtempx * x_0_3_1;
    QUICKDouble x_0_6_4 = Qtempx * x_0_3_4 + WQtempx * x_0_3_5;
    QUICKDouble x_0_7_1 = Qtempx * x_0_1_1 + WQtempx * x_0_1_2 + CDtemp * (VY_1 - ABcom * VY_2);
    QUICKDouble x_0_7_2 = Qtempx * x_0_1_2 + WQtempx * x_0_1_3 + CDtemp * (VY_2 - ABcom * VY_3);
    QUICKDouble x_0_7_3 = Qtempx * x_0_1_3 + WQtempx * x_0_1_4 + CDtemp * (VY_3 - ABcom * VY_4);
    QUICKDouble x_0_13_0 = Qtempx * x_0_6_0 + WQtempx * x_0_6_1 + CDtemp * (x_0_3_0 - ABcom * x_0_3_1);
    QUICKDouble x_0_13_3 = Qtempx * x_0_6_3 + WQtempx * x_0_6_4 + CDtemp * (x_0_3_3 - ABcom * x_0_3_4);
    QUICKDouble x_0_17_1 = Qtempx * x_0_7_1 + WQtempx * x_0_7_2 + 2.000000 * CDtemp * (x_0_1_1 - ABcom * x_0_1_2);
    QUICKDouble x_0_17_2 = Qtempx * x_0_7_2 + WQtempx * x_0_7_3 + 2.000000 * CDtemp * (x_0_1_2 - ABcom * x_0_1_3);
    QUICKDouble x_0_26_0 = Qtempx * x_0_13_0 + WQtempx * x_0_13_1 + 2.000000 * CDtemp * (x_0_6_0 - ABcom * x_0_6_1);
    QUICKDouble x_0_26_2 = Qtempx * x_0_13_2 + WQtempx * x_0_13_3 + 2.000000 * CDtemp * (x_0_6_2 - ABcom * x_0_6_3);
    QUICKDouble x_0_32_1 = Qtempx * x_0_17_1 + WQtempx * x_0_17_2 + 3.000000 * CDtemp * (x_0_7_1 - ABcom * x_0_7_2);
    QUICKDouble x_0_50_0 = Qtempx * x_0_26_0 + WQtempx * x_0_26_1 + 3.000000 * CDtemp * (x_0_13_0 - ABcom * x_0_13_1);
    QUICKDouble x_0_50_1 = Qtempx * x_0_26_1 + WQtempx * x_0_26_2 + 3.000000 * CDtemp * (x_0_13_1 - ABcom * x_0_13_2);
    LOCSTORE(store, 3, 50, STOREDIM, STOREDIM) += Ptempz * x_0_50_0 + WPtempz * x_0_50_1 + ABCDtemp * x_0_32_1;
    LOCSTORE(store, 2, 50, STOREDIM, STOREDIM) += Ptempy * x_0_50_0 + WPtempy * x_0_50_1;
    LOCSTORE(store, 1, 50, STOREDIM, STOREDIM) += Ptempx * x_0_50_0 + WPtempx * x_0_50_1 + 4.000000 * ABCDtemp * x_0_26_1;
    QUICKDouble x_0_33_0 = Qtempy * x_0_18_0 + WQtempy * x_0_18_1 + 3.000000 * CDtemp * (x_0_8_0 - ABcom * x_0_8_1);
    QUICKDouble x_0_33_2 = Qtempy * x_0_18_2 + WQtempy * x_0_18_3 + 3.000000 * CDtemp * (x_0_8_2 - ABcom * x_0_8_3);
    QUICKDouble x_0_51_0 = Qtempx * x_0_33_0 + WQtempx * x_0_33_1;
    QUICKDouble x_0_51_1 = Qtempx * x_0_33_1 + WQtempx * x_0_33_2;
    LOCSTORE(store, 3, 51, STOREDIM, STOREDIM) += Ptempz * x_0_51_0 + WPtempz * x_0_51_1;
    LOCSTORE(store, 2, 51, STOREDIM, STOREDIM) += Ptempy * x_0_51_0 + WPtempy * x_0_51_1 + 4.000000 * ABCDtemp * x_0_29_1;
    LOCSTORE(store, 1, 51, STOREDIM, STOREDIM) += Ptempx * x_0_51_0 + WPtempx * x_0_51_1 + ABCDtemp * x_0_33_1;
    QUICKDouble x_0_4_0 = Qtempx * x_0_2_0 + WQtempx * x_0_2_1;
    QUICKDouble x_0_4_4 = Qtempx * x_0_2_4 + WQtempx * x_0_2_5;
    QUICKDouble x_0_11_0 = Qtempx * x_0_4_0 + WQtempx * x_0_4_1 + CDtemp * (x_0_2_0 - ABcom * x_0_2_1);
    QUICKDouble x_0_11_3 = Qtempx * x_0_4_3 + WQtempx * x_0_4_4 + CDtemp * (x_0_2_3 - ABcom * x_0_2_4);
    QUICKDouble x_0_28_0 = Qtempx * x_0_11_0 + WQtempx * x_0_11_1 + 2.000000 * CDtemp * (x_0_4_0 - ABcom * x_0_4_1);
    QUICKDouble x_0_28_2 = Qtempx * x_0_11_2 + WQtempx * x_0_11_3 + 2.000000 * CDtemp * (x_0_4_2 - ABcom * x_0_4_3);
    QUICKDouble x_0_52_0 = Qtempx * x_0_28_0 + WQtempx * x_0_28_1 + 3.000000 * CDtemp * (x_0_11_0 - ABcom * x_0_11_1);
    QUICKDouble x_0_52_1 = Qtempx * x_0_28_1 + WQtempx * x_0_28_2 + 3.000000 * CDtemp * (x_0_11_1 - ABcom * x_0_11_2);
    LOCSTORE(store, 3, 52, STOREDIM, STOREDIM) += Ptempz * x_0_52_0 + WPtempz * x_0_52_1;
    LOCSTORE(store, 2, 52, STOREDIM, STOREDIM) += Ptempy * x_0_52_0 + WPtempy * x_0_52_1 + ABCDtemp * x_0_32_1;
    LOCSTORE(store, 1, 52, STOREDIM, STOREDIM) += Ptempx * x_0_52_0 + WPtempx * x_0_52_1 + 4.000000 * ABCDtemp * x_0_28_1;
    QUICKDouble x_0_1_0 = Qtempx * VY_0 + WQtempx * VY_1;
    QUICKDouble x_0_1_5 = Qtempx * VY_5 + WQtempx * VY_6;
    QUICKDouble x_0_7_0 = Qtempx * x_0_1_0 + WQtempx * x_0_1_1 + CDtemp * (VY_0 - ABcom * VY_1);
    QUICKDouble x_0_7_4 = Qtempx * x_0_1_4 + WQtempx * x_0_1_5 + CDtemp * (VY_4 - ABcom * VY_5);
    QUICKDouble x_0_17_0 = Qtempx * x_0_7_0 + WQtempx * x_0_7_1 + 2.000000 * CDtemp * (x_0_1_0 - ABcom * x_0_1_1);
    QUICKDouble x_0_17_3 = Qtempx * x_0_7_3 + WQtempx * x_0_7_4 + 2.000000 * CDtemp * (x_0_1_3 - ABcom * x_0_1_4);
    QUICKDouble x_0_32_0 = Qtempx * x_0_17_0 + WQtempx * x_0_17_1 + 3.000000 * CDtemp * (x_0_7_0 - ABcom * x_0_7_1);
    QUICKDouble x_0_32_2 = Qtempx * x_0_17_2 + WQtempx * x_0_17_3 + 3.000000 * CDtemp * (x_0_7_2 - ABcom * x_0_7_3);
    QUICKDouble x_0_53_0 = Qtempx * x_0_32_0 + WQtempx * x_0_32_1 + 4.000000 * CDtemp * (x_0_17_0 - ABcom * x_0_17_1);
    QUICKDouble x_0_53_1 = Qtempx * x_0_32_1 + WQtempx * x_0_32_2 + 4.000000 * CDtemp * (x_0_17_1 - ABcom * x_0_17_2);
    LOCSTORE(store, 3, 53, STOREDIM, STOREDIM) += Ptempz * x_0_53_0 + WPtempz * x_0_53_1;
    LOCSTORE(store, 2, 53, STOREDIM, STOREDIM) += Ptempy * x_0_53_0 + WPtempy * x_0_53_1;
    LOCSTORE(store, 1, 53, STOREDIM, STOREDIM) += Ptempx * x_0_53_0 + WPtempx * x_0_53_1 + 5.000000 * ABCDtemp * x_0_32_1;
    QUICKDouble x_0_54_0 = Qtempy * x_0_33_0 + WQtempy * x_0_33_1 + 4.000000 * CDtemp * (x_0_18_0 - ABcom * x_0_18_1);
    QUICKDouble x_0_54_1 = Qtempy * x_0_33_1 + WQtempy * x_0_33_2 + 4.000000 * CDtemp * (x_0_18_1 - ABcom * x_0_18_2);
    LOCSTORE(store, 3, 54, STOREDIM, STOREDIM) += Ptempz * x_0_54_0 + WPtempz * x_0_54_1;
    LOCSTORE(store, 2, 54, STOREDIM, STOREDIM) += Ptempy * x_0_54_0 + WPtempy * x_0_54_1 + 5.000000 * ABCDtemp * x_0_33_1;
    LOCSTORE(store, 1, 54, STOREDIM, STOREDIM) += Ptempx * x_0_54_0 + WPtempx * x_0_54_1;
    QUICKDouble x_0_55_0 = Qtempz * x_0_34_0 + WQtempz * x_0_34_1 + 4.000000 * CDtemp * (x_0_19_0 - ABcom * x_0_19_1);
    QUICKDouble x_0_55_1 = Qtempz * x_0_34_1 + WQtempz * x_0_34_2 + 4.000000 * CDtemp * (x_0_19_1 - ABcom * x_0_19_2);
    LOCSTORE(store, 3, 55, STOREDIM, STOREDIM) += Ptempz * x_0_55_0 + WPtempz * x_0_55_1 + 5.000000 * ABCDtemp * x_0_34_1;
    LOCSTORE(store, 2, 55, STOREDIM, STOREDIM) += Ptempy * x_0_55_0 + WPtempy * x_0_55_1;
    LOCSTORE(store, 1, 55, STOREDIM, STOREDIM) += Ptempx * x_0_55_0 + WPtempx * x_0_55_1;
    // [PS|HS] integral - End 

}

