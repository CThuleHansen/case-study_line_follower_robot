/**
* This file is generated by Overture's VDM-to-C code generator version 0.1.7-SNAPSHOT.
* Website: https://github.com/overturetool/vdm2c
*/

#ifndef CLASSES_HardwareInterface_H_
#define CLASSES_HardwareInterface_H_

#define VDM_CG

#include "Vdm.h"

/*  include types used in the class */
#include "HardwareInterface.h"
#include "RealPort.h"


/* -------------------------------
 *
 * Quotes
 *
 --------------------------------- */ 
 


/* -------------------------------
 *
 * values / global const
 *
 --------------------------------- */ 
 
extern TVP numFields_2;
extern TVP g_HardwareInterface_forwardSpeed;
extern TVP g_HardwareInterface_forwardRotate;
extern TVP g_HardwareInterface_backwardRotate;


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

/*  class id  */
#define CLASS_ID_HardwareInterface_ID 1

#define HardwareInterfaceCLASS struct HardwareInterface*

/*  The vtable ids  */
#define CLASS_HardwareInterface__Z17HardwareInterfaceEV 0

struct HardwareInterface
{
	
/* Definition of Class: 'HardwareInterface' */
	VDM_CLASS_BASE_DEFINITIONS(HardwareInterface);
	 
	VDM_CLASS_FIELD_DEFINITION(HardwareInterface,leftVal);
	VDM_CLASS_FIELD_DEFINITION(HardwareInterface,rightVal);
	VDM_CLASS_FIELD_DEFINITION(HardwareInterface,total_energy_used);
	VDM_CLASS_FIELD_DEFINITION(HardwareInterface,servo_right_out);
	VDM_CLASS_FIELD_DEFINITION(HardwareInterface,servo_left_out);
	VDM_CLASS_FIELD_DEFINITION(HardwareInterface,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* HardwareInterface.vdmrt 9:7 */
	TVP _Z17HardwareInterfaceEV(HardwareInterfaceCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void HardwareInterface_const_init();
	void HardwareInterface_const_shutdown();
	void HardwareInterface_static_init();
	void HardwareInterface_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void HardwareInterface_free_fields(HardwareInterfaceCLASS);
HardwareInterfaceCLASS HardwareInterface_Constructor(HardwareInterfaceCLASS);



#endif /* CLASSES_HardwareInterface_H_ */
