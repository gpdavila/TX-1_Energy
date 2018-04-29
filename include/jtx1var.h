/**
 * @file jtx1par.h
 * @author cs
 * @brief This header file contains Jetson TX1 data and parameters.
 */
#ifndef JTX1PAR_H
#define JTX1PAR_H


static const unsigned long jtx1_cpu_freqs[] = {
	102000
	,204000
	,306000
	,408000
	,510000
	,612000
	,714000
	,816000
	,918000
	,1020000
	,1122000
	,1224000
	,1326000
	,1428000
	,1555000
	,1632000
	,1734000
}; // [Hz]


/**
 * @brief Available frequencies of Jetson TX1's GPU
 */
static const unsigned long jtx1_gpu_freqs[] = {
    76800000
    ,153600000
    ,230400000
    ,307200000
    ,384000000
    ,460800000
    ,537600000
    ,614400000
    ,691200000
    ,768000000
    ,844800000
    ,921600000
    ,998400000
}; // [Hz]

/**
 * @brief Available frequencies of Jetson TX1's EMC
 */
static const unsigned long jtx1_emc_freqs[] = {
    /*40800000, 68000000, 102000000,*/ // problematic
    204000000,
    408000000,
    665600000,
    800000000,
    1065600000,
    1331200000,
    1600000000
}; // [Hz]

#endif
