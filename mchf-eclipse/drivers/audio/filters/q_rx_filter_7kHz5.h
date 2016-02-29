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
**  Licence:		CC BY-NC-SA 3.0                                                **
************************************************************************************/

#ifndef __Q_RX_FILTER_7K5_H
#define __Q_RX_FILTER_7K5_H

#define Q_BLOCK_SIZE		1
#define Q_NUM_TAPS			89

/*
 	 * Hilbert 90 Degree, "Phase-added" bandpass filter
     * Kaiser Window FIR Filter, Beta = 5.75, Raised Cosine = 0.91
     * Fc = 2.26 kHz (0.094)
     * BW = 10.3 kHz (0.428)
     * 89 Taps
     *
     * 20140926 by KA7OEI using Iowa Hills Hilbert Filter Designer
     *
     * This filter used in the "7.5 kHz" RX filter position of the mcHF
*/

const float q_rx_7k5_coeffs[Q_NUM_TAPS] =
{
		-0.000133595279188198,
		-0.000253972242871366,
		-0.000442545455235918,
		-0.000592592284809786,
		-0.000587055756238391,
		-0.000457170027500299,
		-0.000440303172549739,
		-0.000798568465950172,
		-0.001501377028825590,
		-0.002106464668726340,
		-0.002090107815922980,
		-0.001437536607000670,
		-0.000898653089024334,
		-0.001455904767136920,
		-0.003296512147539410,
		-0.005281194636582230,
		-0.005712890873894510,
		-0.004021025686443730,
		-0.001799862475721100,
		-0.001819377846194110,
		-0.005416009112775160,
		-0.010590298464491200,
		-0.013102216019464600,
		-0.010305729741534800,
		-0.004435935421679130,
		-0.001691310784615620,
		-0.006883047317184000,
		-0.018038824577509000,
		-0.026587943020900400,
		-0.024440252192639000,
		-0.012481221311433700,
		-0.002135321175753430,
		-0.006594500183516430,
		-0.027916772436847000,
		-0.051907804110099400,
		-0.057941239196375800,
		-0.037989054141423800,
		-0.008835563742366440,
		-0.004078456301562180,
		-0.048153772208588900,
		-0.131295651447913000,
		-0.207233490631282000,
		-0.219903476590932000,
		-0.142459128885576000,
		-0.000000000000006192,
		0.142459128885566000,
		0.219903476590929000,
		0.207233490631286000,
		0.131295651447920000,
		0.048153772208594400,
		0.004078456301563800,
		0.008835563742364790,
		0.037989054141421400,
		0.057941239196375100,
		0.051907804110100700,
		0.027916772436849000,
		0.006594500183517550,
		0.002135321175753080,
		0.012481221311432500,
		0.024440252192638200,
		0.026587943020900600,
		0.018038824577509800,
		0.006883047317184820,
		0.001691310784615810,
		0.004435935421678740,
		0.010305729741534300,
		0.013102216019464400,
		0.010590298464491400,
		0.005416009112775470,
		0.001819377846194210,
		0.001799862475720930,
		0.004021025686443450,
		0.005712890873894360,
		0.005281194636582280,
		0.003296512147539580,
		0.001455904767137060,
		0.000898653089024365,
		0.001437536607000610,
		0.002090107815922920,
		0.002106464668726330,
		0.001501377028825620,
		0.000798568465950211,
		0.000440303172549752,
		0.000457170027500285,
		0.000587055756238372,
		0.000592592284809780,
		0.000442545455235928,
		0.000253972242871382,
		0.000133595279188209
};
// 89.5 degrees
const float q_rx_7k5_coeffs_minus[Q_NUM_TAPS] =
{
		-0.000134001024940524,
		-0.000254921199404569,
		-0.000443359870591047,
		-0.000592242009892187,
		-0.000585358949866752,
		-0.000455660823996473,
		-0.000441356695083438,
		-0.000802886402021266,
		-0.001506151714670980,
		-0.002106912624599590,
		-0.002084201940823820,
		-0.001429740326723390,
		-0.000897725845247537,
		-0.001466739301382700,
		-0.003312967543520600,
		-0.005288562030468290,
		-0.005700945003578050,
		-0.003996956468819650,
		-0.001786641722089340,
		-0.001836287492596350,
		-0.005456640444551370,
		-0.010621103756696200,
		-0.013089681572959700,
		-0.010251854665998400,
		-0.004386719905426480,
		-0.001701375077883580,
		-0.006961080739467940,
		-0.018125607181637900,
		-0.026598817027985300,
		-0.024345553427801700,
		-0.012351932286375100,
		-0.002097781520891650,
		-0.006716139765437990,
		-0.028120476256430500,
		-0.052009147605571400,
		-0.057804940228451400,
		-0.037682376229559600,
		-0.008626834662089420,
		-0.004236017204200000,
		-0.048673672304265800,
		-0.131780939569822000,
		-0.207065973624334000,
		-0.218632907385753000,
		-0.140148729890875000,
		0.002732048389496730,
		0.144758719163609000,
		0.221157361190571000,
		0.207385284334998000,
		0.130800401609229000,
		0.047630218570432100,
		0.003920585956639520,
		0.009043622447175150,
		0.038292849732401600,
		0.058073142023159400,
		0.051802522244716200,
		0.027710950504613600,
		0.006472360261010290,
		0.002172698818662760,
		0.012609563356218600,
		0.024533096616774000,
		0.026575051722646700,
		0.017950673324385100,
		0.006804491661550330,
		0.001681118167531780,
		0.004484814372844550,
		0.010358822896574700,
		0.013113756369335100,
		0.010558689660877100,
		0.005374966855364830,
		0.001802330159220000,
		0.001812946669458800,
		0.004044789819179960,
		0.005724403293443320,
		0.005273426545760270,
		0.003279806637255140,
		0.001444959769895800,
		0.000899512149830445,
		0.001445223817918900,
		0.002095855109516330,
		0.002105856890313580,
		0.001496488429894920,
		0.000794189940569412,
		0.000439216243155622,
		0.000458644544414838,
		0.000588708021278182,
		0.000592897598325816,
		0.000441697462892989,
		0.000253004016853425,
		0.000133179397240816
};
// 90.5 degrees
const float q_rx_7k5_coeffs_plus[Q_NUM_TAPS] =
{
		-0.000133179397240812,
		-0.000253004016853418,
		-0.000441697462892984,
		-0.000592897598325822,
		-0.000588708021278203,
		-0.000458644544414859,
		-0.000439216243155620,
		-0.000794189940569378,
		-0.001496488429894880,
		-0.002105856890313570,
		-0.002095855109516380,
		-0.001445223817918970,
		-0.000899512149830458,
		-0.001444959769895710,
		-0.003279806637254990,
		-0.005273426545760190,
		-0.005724403293443410,
		-0.004044789819180170,
		-0.001812946669458930,
		-0.001802330159219850,
		-0.005374966855364440,
		-0.010558689660876700,
		-0.013113756369335100,
		-0.010358822896575100,
		-0.004484814372844990,
		-0.001681118167531720,
		-0.006804491661549630,
		-0.017950673324384200,
		-0.026575051722646500,
		-0.024533096616774800,
		-0.012609563356219700,
		-0.002172698818663180,
		-0.006472360261009240,
		-0.027710950504611600,
		-0.051802522244714800,
		-0.058073142023160100,
		-0.038292849732404000,
		-0.009043622447177020,
		-0.003920585956638160,
		-0.047630218570426700,
		-0.130800401609222000,
		-0.207385284334994000,
		-0.221157361190573000,
		-0.144758719163619000,
		-0.002732048389509060,
		0.140148729890866000,
		0.218632907385750000,
		0.207065973624338000,
		0.131780939569829000,
		0.048673672304271200,
		0.004236017204201430,
		0.008626834662087570,
		0.037682376229557100,
		0.057804940228450700,
		0.052009147605572700,
		0.028120476256432500,
		0.006716139765439060,
		0.002097781520891260,
		0.012351932286373900,
		0.024345553427800900,
		0.026598817027985500,
		0.018125607181638700,
		0.006961080739468650,
		0.001701375077883650,
		0.004386719905426040,
		0.010251854665997900,
		0.013089681572959700,
		0.010621103756696500,
		0.005456640444551760,
		0.001836287492596500,
		0.001786641722089220,
		0.003996956468819430,
		0.005700945003577960,
		0.005288562030468370,
		0.003312967543520750,
		0.001466739301382800,
		0.000897725845247525,
		0.001429740326723320,
		0.002084201940823770,
		0.002106912624599590,
		0.001506151714671020,
		0.000802886402021300,
		0.000441356695083440,
		0.000455660823996452,
		0.000585358949866732,
		0.000592242009892181,
		0.000443359870591052,
		0.000254921199404576,
		0.000134001024940527
};
//
/*
static float32_t 		FirState_I[128];
arm_fir_instance_f32 	FIR_I;
*/
#endif
