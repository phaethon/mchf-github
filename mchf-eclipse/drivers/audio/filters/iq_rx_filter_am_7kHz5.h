/************************************************************************************
**                                                                                 **
**                               mcHF QRP Transceiver                              **
**                             K Atanassov - M0NKA 2014                            **
**                                                                                 **
**---------------------------------------------------------------------------------**
**                                                                                 **
**  File name:                                                                     **
**  Description:                                                                   **
**  Last Modified:                                                                 **
**  Licence:		For radio amateurs experimentation, non-commercial use only!   **
************************************************************************************/

#ifndef __IQ_RX_FILTER_AM_7KHZ5_H
#define __IQ_RX_FILTER_AM_5KHZ5_H

#define Q_BLOCK_SIZE		1
#define Q_NUM_TAPS			89

/*
 	 * 89 tap FIR lowpass filter for AM demodulation
     * 7.5 kHz lowpass
     * Fc = 3.50 kHz (0.146)
     * BW = 7.73 kHz (0.322)
     * Phase = 0.0 Deg
	 *
     * -6dB @ 7.5 kHz
     * -20dB @ 8.1 kHz
     * -40dB @ 8.5 kHz
     * -60dB > 8.7 kHz
     *
     * 20150724 by KA7OEI using Iowa Hills Hilbert Filter Designer

*/

const float iq_rx_am_7k5_coeffs[Q_NUM_TAPS] =
{
		-0.000054368878976464,
		-0.000109470418324297,
		-0.000080800014418553,
		0.000057887247193655,
		0.000196248384784124,
		0.000143919934167119,
		-0.000166720581170554,
		-0.000516949697820653,
		-0.000513457595923984,
		0.000019591792777547,
		0.000715438143813412,
		0.000837678462105361,
		-0.000026672117250676,
		-0.001346407587573860,
		-0.001854545301167850,
		-0.000681925402542360,
		0.001516983112219140,
		0.002720057594104930,
		0.001264577750721170,
		-0.002218475374737490,
		-0.004716082694953130,
		-0.003290070348926000,
		0.001768705442798720,
		0.006257195418023830,
		0.005315470630396060,
		-0.001674768165904550,
		-0.009231015015775820,
		-0.009741273892250180,
		-0.000735938093829474,
		0.011162261151525300,
		0.014549180415936700,
		0.003582582016681460,
		-0.014560284217669600,
		-0.023377317298097500,
		-0.011097551616034700,
		0.016127337734989000,
		0.035061508247232000,
		0.023170836448327200,
		-0.018977720268267700,
		-0.060089752963952400,
		-0.055598189384657500,
		0.019293047057938800,
		0.145271104740461000,
		0.264027404678331000,
		0.312598578987250000,
		0.264027404678338000,
		0.145271104740472000,
		0.019293047057947600,
		-0.055598189384654300,
		-0.060089752963954300,
		-0.018977720268271600,
		0.023170836448324900,
		0.035061508247232500,
		0.016127337734991200,
		-0.011097551616033100,
		-0.023377317298097600,
		-0.014560284217671000,
		0.003582582016680210,
		0.014549180415936700,
		0.011162261151526300,
		-0.000735938093828361,
		-0.009741273892249770,
		-0.009231015015776210,
		-0.001674768165905220,
		0.005315470630395730,
		0.006257195418023980,
		0.001768705442799040,
		-0.003290070348925910,
		-0.004716082694953380,
		-0.002218475374737840,
		0.001264577750721040,
		0.002720057594105130,
		0.001516983112219500,
		-0.000681925402542081,
		-0.001854545301167810,
		-0.001346407587574020,
		-0.000026672117250873,
		0.000837678462105258,
		0.000715438143813428,
		0.000019591792777618,
		-0.000513457595923930,
		-0.000516949697820644,
		-0.000166720581170573,
		0.000143919934167101,
		0.000196248384784120,
		0.000057887247193660,
		-0.000080800014418548,
		-0.000109470418324297,
		-0.000054368878976467
};

#endif
