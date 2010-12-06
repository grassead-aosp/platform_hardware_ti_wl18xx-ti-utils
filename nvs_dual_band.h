const unsigned char nvs_rdio_prms_dual_band[] = {
/**********************/
/* INI General params */
/**********************/
/* 0 */ 0x1, /* RefClk */
/* 1 */ 0x5, /* SettlingTime */
/* 2 */ 0x0, /* ClockValidOnWakeup */
/* 3 */ 0x0, /* DC2DCMode */
/* 4 */ 0x1, /* Single_Dual_Band_Solution */
/* 5 */ 0x0, /* TXBiPFEMAutoDetect */
/* 6 */ 0x1, /* TXBiPFEMManufacturer */
/* 7 */ 0x41, /* GeneralSettings */
/* 8 */ 0x1, /* SRState */
/* 9 */ 0x07, 0x03, 0x18, 0x10, 0x05, 0xFB, 0xF0, 0xE8, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0F, 0x3F, /* SRF1[16] */
/* 19 */ 0x07, 0x03, 0x18, 0x10, 0x05, 0xFB, 0xF0, 0xE8, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, /* SRF2[16] */
/* 29 */ 0x07, 0x03, 0x18, 0x10, 0x05, 0xFB, 0xF0, 0xE8, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, /* SRF3[16] */
/* 39 */ 0x0, /* padding */
/*************************/
/* INI Stat Radio params */
/*************************/
/* 3a */ 0x0, /* RxTraceInsertionLoss_2_4G */
/* 3b */ 0x0, /* TXTraceLoss_2_4G */
/* 3c */ 0xec, 0xf6, 0x0, 0xc, 0x18, 0xf8, 0xfc, 0x0, 0x8, 0x10, 0xf0, 0xf8,
0x0, 0xa, 0x14, /* RxRssiAndProcessCompensation_2_4G[15] */
/* 4b */ 0x0, /* padding */
/*******************************/
/* Dyn Radio Params. First FEM */
/*******************************/
/* 4c */ 0x64, 0x1, /* TXBiPReferencePDvoltage_2_4G */
/* 4e */ 0x80, /* TxBiPReferencePower_2_4G */
/* 4f */ 0x0, /* TxBiPOffsetdB_2_4G */
/* 50 */ 0x1c, 0x1f, 0x22, 0x24, 0x28,
0x29, /* TxPerRatePowerLimits_2_4G_Normal[6] */
/* 56 */ 0x19, 0x1f, 0x22, 0x23, 0x27,
0x28, /* TxPerRatePowerLimits_2_4G_Degraded[6] */
/* 5c */ 0x19, 0x1c, 0x1e, 0x20, 0x24,
0x25, /* TxPerRatePowerLimits_2_4G_Extreme[6] */
/* 62 */ 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, /* TxPerChannelPowerLimits_2_4G_11b[14] */
/* 70 */ 0x20, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x20, 0x50, 0x50, 0x50, /* TxPerChannelPowerLimits_2_4G_OFDM[14] */
/* 7e */ 0x1, 0x2, 0x2, 0x2, 0x2, 0x0, /* TxPDVsRateOffsets_2_4G[6] */
/* 84 */ 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x21, /* TxIbiasTable_2_4G[6] */
/* 8a */ 0x10, /* RxFemInsertionLoss_2_4G */
/* 8b */ 0x1e, /* DegradedLowToNormalThr_2_4G */
/* 8c */ 0x2d, /* NormalToDegradedHighThr_2_4G */
/* 8d */ 0x0, /* padding */
/************************************/
/* INI Dyn Radio Params. Second FEM */
/************************************/
/* 8e */ 0xd9, 0x1, /* TXBiPReferencePDvoltage_2_4G */
/* 90 */ 0x80, /* TxBiPReferencePower_2_4G */
/* 91 */ 0x0, /* TxBiPOffsetdB_2_4G */
/* 92 */ 0x1d, 0x1f, 0x22, 0x26, 0x27,
0x29, /* TxPerRatePowerLimits_2_4G_Normal[6] */
/* 98 */ 0x1d, 0x1f, 0x22, 0x26, 0x27,
0x27, /* TxPerRatePowerLimits_2_4G_Degraded[6] */
/* 9e */ 0x16, 0x1d, 0x1e, 0x20, 0x24,
0x25, /* TxPerRatePowerLimits_2_4G_Extreme[6] */
/* a4 */ 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, /* TxPerChannelPowerLimits_2_4G_11b[14] */
/* b2 */ 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, /* TxPerChannelPowerLimits_2_4G_OFDM[14] */
/* c0 */ 0x1, 0x2, 0x2, 0x2, 0x2, 0x0, /* TxPDVsRateOffsets_2_4G[6] */
/* c6 */ 0x15, 0x15, 0x15, 0x19, 0x19, 0x15, /* TxIbiasTable_2_4G[6] */
/* cc */ 0xE, /* RxFemInsertionLoss_2_4G */
/* cd */ 0x1e, /* DegradedLowToNormalThr_2_4G */
/* ce */ 0x2d, /* NormalToDegradedHighThr_2_4G */
/* cf */ 0x0, /* padding */
/*************************/
/* INI Stat Radio params 5GHZ */
/*************************/
/* d0 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, /* RxTraceInsertionLoss_5G */
/* d7 */ 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, /* TXTraceLoss_5G */
/* de */ 0xee, 0xf4, 0xf8, 0xfe, 0x5, 0xea, 0xf3, 0xfa, 0x1, 0x6, 0xe5,
0xf1, 0xfa, 0x2, 0x7, /* RxRssiAndProcessCompensation_5G[15] */
/* ed */ 0x0, /* padding */
/*******************************/
/* Dyn Radio Params. First FEM RFMD 5GHZ */
/*******************************/
/* ee */ 0x9a, 0x1, 0xae, 0x1, 0xc2, 0x1, 0xcc, 0x1, 0xdb,
0x1, 0xdb, 0x1, 0xd1, 0x1, /* TXBiPReferencePDvoltage_5G */
/* fc */ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, /* TxBiPReferencePower_5G */
/* 103 */ 0x0,  0x0, 0x0, 0x0, 0x0, 0x0, 0x0,/* TxBiPOffsetdB_5G */
/* 10a */ 0x1c, 0x1e, 0x21, 0x23, 0x25,
0x50, /* TxPerRatePowerLimits_5G_Normal[6] */
/* 110 */ 0x18, 0x1e, 0x21, 0x23, 0x25,
0x50, /* TxPerRatePowerLimits_5G_Degraded[6] */
/* 116 */ 0x16, 0x1c, 0x1e, 0x20, 0x20,
0x50, /* TxPerRatePowerLimits_5G_Extreme[6] */
/* 11c */ 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, /* TxPerChannelPowerLimits_5G_OFDM[35] */
/* 13f */ 0x1, 0x2, 0x2, 0x2, 0x2, 0x0, /* TxPDVsRateOffsets_5G[6] */
/* 145 */ 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, /* TxIbiasTable_5G[6] */
/* 14b */ 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, /* RxFemInsertionLoss_5G */
/* 153 */ 0x1e, /* DegradedLowToNormalThr_5G */
/* 154 */ 0x2d, /* NormalToDegradedHighThr_5G */
/* 155 */ 0x0, /* padding */
/*********************************************/
/* INI Dyn Radio Params. Second FEM TQS 5GHZ */
/*********************************************/
/* 156 */ 0x9a, 0x1, 0xae, 0x1, 0xc2, 0x1, 0xcc, 0x1, 0xdb, 0x1, 0xdb, 0x1,
0xd1, 0x1, /* TXBiPReferencePDvoltage_5G */
/* 164 */ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, /* TxBiPReferencePower_5G */
/* 16b */ 0x0,  0x0, 0x0, 0x0, 0x0, 0x0, 0x0,/* TxBiPOffsetdB_5G */
/* 173 */ 0x1c, 0x1e, 0x21, 0x23, 0x25,
0x50, /* TxPerRatePowerLimits_5G_Normal[6] */
/* 179 */ 0x18, 0x1e, 0x21, 0x23, 0x25,
0x50, /* TxPerRatePowerLimits_5G_Degraded[6] */
/* 17f */ 0x16, 0x1c, 0x1e, 0x20, 0x20,
0x50, /* TxPerRatePowerLimits_5G_Extreme[6] */
/* 185 */ 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
0x50, 0x50, 0x50, /* TxPerChannelPowerLimits_5G_OFDM[35] */
/* 1a8 */ 0x1, 0x2, 0x2, 0x2, 0x2, 0x0, /* TxPDVsRateOffsets_5G[6] */
/* 1ae */ 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, 0x1a, /* TxIbiasTable_5G[6] */
/* 1b4 */ 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, /* RxFemInsertionLoss_5G */
/* 1b5 */ 0x1e, /* DegradedLowToNormalThr_5G */
/* 1b6 */ 0x2d, /* NormalToDegradedHighThr_5G */
/* 1b7 */ 0x0, /* padding */
};
