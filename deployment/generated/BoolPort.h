/**
* This file is generated by Overture's VDM-to-C code generator version 0.1.7-SNAPSHOT.
* Website: https://github.com/overturetool/vdm2c
*/

#ifndef CLASSES_BoolPort_H_
#define CLASSES_BoolPort_H_

#define VDM_CG

#include "Vdm.h"
#include "Port.h"

/*  include types used in the class */
#include "Port.h"
#include "BoolPort.h"


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
 


/* -------------------------------
 *
 * The class
 *
 --------------------------------- */ 
 

/*  class id  */
#define CLASS_ID_BoolPort_ID 8

#define BoolPortCLASS struct BoolPort*

/*  The vtable ids  */
#define CLASS_BoolPort__Z8BoolPortEB 0
#define CLASS_BoolPort__Z8setValueEB 1
#define CLASS_BoolPort__Z8getValueEV 2
#define CLASS_BoolPort__Z8BoolPortEV 3

struct BoolPort
{
	
/* Definition of Class: 'Port' */
	VDM_CLASS_BASE_DEFINITIONS(Port);
	 
	VDM_CLASS_FIELD_DEFINITION(Port,numFields);

	
/* Definition of Class: 'BoolPort' */
	VDM_CLASS_BASE_DEFINITIONS(BoolPort);
	 
	VDM_CLASS_FIELD_DEFINITION(BoolPort,value);
	VDM_CLASS_FIELD_DEFINITION(BoolPort,numFields);

};


/* -------------------------------
 *
 * Constructors
 *
 --------------------------------- */ 
 

	/* Fmi.vdmrt 57:9 */
	TVP _Z8BoolPortEB(BoolPortCLASS this_, TVP v);
	/* Fmi.vdmrt 51:7 */
	TVP _Z8BoolPortEV(BoolPortCLASS this_);


/* -------------------------------
 *
 * public access functions
 *
 --------------------------------- */ 
 
	void BoolPort_const_init();
	void BoolPort_const_shutdown();
	void BoolPort_static_init();
	void BoolPort_static_shutdown();


/* -------------------------------
 *
 * Internal
 *
 --------------------------------- */ 
 

void BoolPort_free_fields(BoolPortCLASS);
BoolPortCLASS BoolPort_Constructor(BoolPortCLASS);



#endif /* CLASSES_BoolPort_H_ */
