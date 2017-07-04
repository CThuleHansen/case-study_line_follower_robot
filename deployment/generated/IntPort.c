/**
* This file is generated by Overture's VDM-to-C code generator version 0.1.7-SNAPSHOT.
* Website: https://github.com/overturetool/vdm2c
*/

#include "IntPort.h"
#include <stdio.h>
#include <string.h>


/* -------------------------------
 *
 * Memory management methods
 *
 --------------------------------- */

void IntPort_free_fields(struct IntPort *this)
{
		vdmFree(this->m_IntPort_value);
	}

static void IntPort_free(struct IntPort *this)
{
	--this->_IntPort_refs;
	if (this->_IntPort_refs < 1)
	{
		IntPort_free_fields(this);
		free(this);
	}
}


/* -------------------------------
 *
 * Member methods 
 *
 --------------------------------- */
 

 static  TVP _Z18fieldInitializer18EV(IntPortCLASS this)	{
/* Fmi.vdmrt 37:14 */
TVP ret_19 = newInt(0)
;

return ret_19;
}


/* Fmi.vdmrt 43:9 */
 static  void _Z8setValueEI(IntPortCLASS this, TVP v)	{
/* Fmi.vdmrt 44:24 */
TVP field_tmp_7 = vdmCloneGC(v, &field_tmp_7)
;

SET_FIELD_PTR_GC(IntPort, IntPort, this, value, field_tmp_7);

vdmFree(field_tmp_7);
}


/* Fmi.vdmrt 46:9 */
 static  TVP _Z8getValueEV(IntPortCLASS this)	{
/* Fmi.vdmrt 47:23 */
TVP ret_20 = vdmCloneGC(GET_FIELD_PTR_GC(IntPort, IntPort, this, value), NULL)
;
/* Fmi.vdmrt 47:16 */
return ret_20;
}



 void IntPort_const_init()	{

return ;
}



 void IntPort_const_shutdown()	{

return ;
}



 void IntPort_static_init()	{

return ;
}



 void IntPort_static_shutdown()	{

return ;
}


/* Fmi.vdmrt 29:9 */
 static  TVP Port__Z8getValueEV(PortCLASS base)	{

IntPortCLASS this = CLASS_DOWNCAST(Port, IntPort, base)
;

return _Z8getValueEV(this);
}




/* -------------------------------
 *
 * VTable
 *
 --------------------------------- */
 
/*  VTable for this class  */
 static  struct VTable VTableArrayForIntPort  [] ={

{0,0,((VirtualFunctionPointer) _Z7IntPortEI),},
{0,0,((VirtualFunctionPointer) _Z8setValueEI),},
{0,0,((VirtualFunctionPointer) _Z8getValueEV),},
{0,0,((VirtualFunctionPointer) _Z7IntPortEV),},
				
}  ;

/*  Overload VTables  */
 static  struct VTable g_VTableArrayForIntPort_Override_Port  [3]  ;


/* -------------------------------
 *
 * Internal memory constructor
 *
 --------------------------------- */
 
 
IntPortCLASS IntPort_Constructor(IntPortCLASS this_ptr)
{

	if(this_ptr==NULL)
	{
		this_ptr = (IntPortCLASS) malloc(sizeof(struct IntPort));
	}

	if(this_ptr!=NULL)
	{
	
			
		/*  init base Port  */
		Port_Constructor((PortCLASS)CLASS_CAST(this_ptr,IntPort,Port));

					if(! g_VTableArrayForIntPort_Override_Port[0].pFunc)
			{
				/*  obtain original Port VTable  */
				/*  This will require rework for multiple inheritance, specifically the "... [0].getVtable..."  */
				memcpy( g_VTableArrayForIntPort_Override_Port, this_ptr->_Port_pVTable, sizeof( struct VTable) * 3);
				
				/*  install overrides  */
									g_VTableArrayForIntPort_Override_Port[CLASS_Port__Z8getValueEV].pFunc = (VirtualFunctionPointer)Port__Z8getValueEV; /*  override  */
					
							}
			this_ptr->_Port_pVTable = g_VTableArrayForIntPort_Override_Port;
				
		
		/*  IntPort init  */
		this_ptr->_IntPort_id = CLASS_ID_IntPort_ID;
		this_ptr->_IntPort_refs = 0;
		this_ptr->_IntPort_pVTable=VTableArrayForIntPort;

				this_ptr->m_IntPort_value= _Z18fieldInitializer18EV(this_ptr);
			}

	return this_ptr;
}

/*  Method for creating new "class"  */
static TVP new()
{
	IntPortCLASS ptr=IntPort_Constructor(NULL);

	return newTypeValue(VDM_CLASS, (TypedValueType)
			{	.ptr=newClassValue(ptr->_IntPort_id, &ptr->_IntPort_refs, (freeVdmClassFunction)&IntPort_free, ptr)});
}



/* -------------------------------
 *
 * Public class constructors
 *
 --------------------------------- */ 
 

/* Fmi.vdmrt 40:9 */
 TVP _Z7IntPortEI(IntPortCLASS this, TVP v)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, IntPort);
}
;
/* Fmi.vdmrt 41:14 */
CALL_FUNC_PTR(IntPort, IntPort, this, CLASS_IntPort__Z8setValueEI, v);

return __buf;
}


/* Fmi.vdmrt 34:7 */
 TVP _Z7IntPortEV(IntPortCLASS this)	{

TVP __buf = NULL
;

if ( this == NULL )
	
	{

__buf = new();

this = TO_CLASS_PTR(__buf, IntPort);
}
;

return __buf;
}




/* -------------------------------
 *
 * Global class fields
 *
 --------------------------------- */
 
/*  initialize globals - this is done last since they are declared in the header but uses init functions which are printet in any order  */
	