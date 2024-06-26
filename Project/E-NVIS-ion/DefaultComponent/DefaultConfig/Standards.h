/*********************************************************************
	Rhapsody	: 9.0 
	Login		: 20235613
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Standards
//!	Generated Date	: Thu, 18, Apr 2024  
	File Path	: DefaultComponent\DefaultConfig\Standards.h
*********************************************************************/

#ifndef Standards_H
#define Standards_H

//## auto_generated
#include <oxf.h>
//## auto_generated
#include <aom.h>
//## auto_generated
#include "System_Context.h"
//## link itsNVIS
class NVIS;

//## package System_Analysis::System_Context

//## class Standards
class Standards {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStandards;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Standards(void);
    
    //## auto_generated
    ~Standards(void);
    
    ////    Additional operations    ////
    
    //## auto_generated
    const NVIS* getItsNVIS(void) const;
    
    //## auto_generated
    void setItsNVIS(NVIS* const p_NVIS);

protected :

    //## auto_generated
    void cleanUpRelations(void);
    
    ////    Relations and components    ////

private :

    NVIS* itsNVIS;		//## link itsNVIS
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _setItsNVIS(NVIS* const p_NVIS);
    
    //## auto_generated
    void _clearItsNVIS(void);
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStandards : virtual public AOMInstance {
    DECLARE_META(Standards, OMAnimatedStandards)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Standards.h
*********************************************************************/
