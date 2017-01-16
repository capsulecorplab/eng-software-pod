/**
 * @file		FCU_CORE__DEFINES.H
 * @brief		Flight control code constants
 * @author		Lachlan Grogan
 * @copyright	rLoop Inc.
 */
#ifndef _FCU_CORE__DEFINES_H_
#define _FCU_CORE__DEFINES_H_


	/** the number of brake actuators in the system */
	#define C_FCU__NUM_BRAKES								(2U)


	/** 2 Accel devices on the PCB - DO NOT CHANGE */
	#define C_FCU__NUM_ACCEL_CHIPS							(2U)

	/** Hover Engines */
	#define C_FCU__NUM_HOVER_ENGINES						(8U)

	//laser orientation code defines
	#define LASER_ORIENT__X 0U
	#define LASER_ORIENT__Y 1U
	#define LASER_ORIENT__Z 2U
	#define LASER_ORIENT__A 0U
	#define LASER_ORIENT__B 1U
	#define LASER_ORIENT__C 2U
	#define LASER_ORIENT__D 3U

	/** Number of lasers facing down to the ground */
	#define C_FCU__NUM_LASERS_GROUND						(4U)

	/** number of lasers for the i-beam */
	#define C_FCU__NUM_LASERS_IBEAM							(2U)

	/** Total number of Laser OptoNCDT's*/
	#define C_FCU__NUM_LASERS_OPTONCDT						(C_FCU__NUM_LASERS_GROUND + C_FCU__NUM_LASERS_IBEAM)

	/** number of lasers for the constrast detection system */
	#define C_FCU__NUM_LASERS_CONTRAST						(3U)

	/** The SC16 device index for the ASI interface*/
	#define C_FCU__SC16_ASI_INDEX							(7U)

	/** The max number of contrast laser stripes in the tube
	 * 1 Mile Tube = 5280ft
	 * Spacing = 100ft
	 * Stripes = 53 + 2 spare
	 *  */
	#define C_FCU__LASER_CONTRAST__MAX_STRIPES				(55U)


	/** Min brakes I-Beam Distance */
	#define C_FCU__BRAKES__MIN_IBEAM_DIST_MM				(2.5F)

	#define C_FCU__BRAKES__MAX_IBEAM_DIST_MM				(22.0F)

	/** Macro definitions used to AUTO SEQUENCE/TEST PHASE */
	/** TOLERANCE for sensor read from MLP */
	#define C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM			(0.0F)


	/** This half way between fully extended and retracted */
	#define C_FCU__BRAKES__HALF_WAY_IBEAM_DIST_MM				(C_FCU__BRAKES__MIN_IBEAM_DIST_MM + ((C_FCU__BRAKES__MAX_IBEAM_DIST_MM - C_FCU__BRAKES__MIN_IBEAM_DIST_MM) / 2))

	/** Added/Subtracted tolerance to account for acceptable sensor read errors */
	#define C_FCU__BRAKES__HALF_WAY_IBEAM_DIST_LOW_BOUND_MM		(C_FCU__BRAKES__HALF_WAY_IBEAM_DIST_MM - C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM)

	#define C_FCU__BRAKES__HALF_WAY_IBEAM_DIST_UP_BOUND_MM		(C_FCU__BRAKES__HALF_WAY_IBEAM_DIST_MM + C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM)

	#define C_FCU__BRAKES__MIN_IBEAM_DIST_LOW_BOUND_MM 			(C_FCU__BRAKES__MIN_IBEAM_DIST_MM - C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM)

	#define C_FCU__BRAKES__MIN_IBEAM_DIST_UP_BOUND_MM 			(C_FCU__BRAKES__MIN_IBEAM_DIST_MM + C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM)

	#define C_FCU__BRAKES__MAX_IBEAM_DIST_LOW_BOUND_MM 			(C_FCU__BRAKES__MAX_IBEAM_DIST_MM - C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM)

	#define C_FCU__BRAKES__MAX_IBEAM_DIST_UP_BOUND_MM 			(C_FCU__BRAKES__MAX_IBEAM_DIST_MM + C_FCU__BRAKES__IBEAM_DIST_TOLERANCE_MM)

	/// Tolerance addition/subtraction ends here

#endif /* _FCU_CORE__DEFINES_H_ */
