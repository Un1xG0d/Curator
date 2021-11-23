/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.3
 *
 * Copyright (C) 2009 Autodesk, Inc. and/or its licensors.
 * All Rights Reserved.
 * 
 * The coded instructions, statements, computer programs, and/or related material 
 * (collectively the "Data") in these files contain unpublished information 
 * proprietary to Autodesk, Inc. and/or its licensors, which is protected by 
 * Canada and United States of America federal copyright law and by international 
 * treaties. 
 * 
 * The Data may not be disclosed or distributed to third parties, in whole or in
 * part, without the prior written consent of Autodesk, Inc. ("Autodesk").
 * 
 * THE DATA IS PROVIDED "AS IS" AND WITHOUT WARRANTY.
 * ALL WARRANTIES ARE EXPRESSLY EXCLUDED AND DISCLAIMED. AUTODESK MAKES NO
 * WARRANTY OF ANY KIND WITH RESPECT TO THE DATA, EXPRESS, IMPLIED OR ARISING
 * BY CUSTOM OR TRADE USAGE, AND DISCLAIMS ANY IMPLIED WARRANTIES OF TITLE, 
 * NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR USE. 
 * WITHOUT LIMITING THE FOREGOING, AUTODESK DOES NOT WARRANT THAT THE OPERATION
 * OF THE DATA WILL BE UNINTERRUPTED OR ERROR FREE. 
 * 
 * IN NO EVENT SHALL AUTODESK, ITS AFFILIATES, PARENT COMPANIES, LICENSORS
 * OR SUPPLIERS ("AUTODESK GROUP") BE LIABLE FOR ANY LOSSES, DAMAGES OR EXPENSES
 * OF ANY KIND (INCLUDING WITHOUT LIMITATION PUNITIVE OR MULTIPLE DAMAGES OR OTHER
 * SPECIAL, DIRECT, INDIRECT, EXEMPLARY, INCIDENTAL, LOSS OF PROFITS, REVENUE
 * OR DATA, COST OF COVER OR CONSEQUENTIAL LOSSES OR DAMAGES OF ANY KIND),
 * HOWEVER CAUSED, AND REGARDLESS OF THE THEORY OF LIABILITY, WHETHER DERIVED
 * FROM CONTRACT, TORT (INCLUDING, BUT NOT LIMITED TO, NEGLIGENCE), OR OTHERWISE,
 * ARISING OUT OF OR RELATING TO THE DATA OR ITS USE OR ANY OTHER PERFORMANCE,
 * WHETHER OR NOT AUTODESK HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS
 * OR DAMAGE. 
 */

#include "sipAPIfbx.h"




PyDoc_STRVAR(doc_FbxConstraintScale_Create, "Create(FbxManager, str) -> FbxConstraintScale\n"
    "Create(FbxObject, str) -> FbxConstraintScale");

extern "C" {static PyObject *meth_FbxConstraintScale_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxConstraintScale*sipRes;

            sipRes =  ::FbxConstraintScale::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxConstraintScale,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxConstraintScale*sipRes;

            sipRes =  ::FbxConstraintScale::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxConstraintScale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_Create, doc_FbxConstraintScale_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxConstraintScale_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxConstraintScale, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxConstraintScale::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_GetClassId, doc_FbxConstraintScale_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_GetSourceWeight, "GetSourceWeight(self, FbxObject) -> float");

extern "C" {static PyObject *meth_FbxConstraintScale_GetSourceWeight(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_GetSourceWeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxObject* a0;
        const  ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxConstraintScale, &sipCpp, sipType_FbxObject, &a0))
        {
            double sipRes;

            sipRes = sipCpp->GetSourceWeight(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_GetSourceWeight, doc_FbxConstraintScale_GetSourceWeight);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_AddConstraintSource, "AddConstraintSource(self, FbxObject, float = 100)");

extern "C" {static PyObject *meth_FbxConstraintScale_AddConstraintSource(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_AddConstraintSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
        double a1 = 100;
         ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|d", &sipSelf, sipType_FbxConstraintScale, &sipCpp, sipType_FbxObject, &a0, &a1))
        {
            sipCpp->AddConstraintSource(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_AddConstraintSource, doc_FbxConstraintScale_AddConstraintSource);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_GetConstraintSourceCount, "GetConstraintSourceCount(self) -> int");

extern "C" {static PyObject *meth_FbxConstraintScale_GetConstraintSourceCount(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_GetConstraintSourceCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxConstraintScale, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxConstraintScale::GetConstraintSourceCount() : sipCpp->GetConstraintSourceCount());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_GetConstraintSourceCount, doc_FbxConstraintScale_GetConstraintSourceCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_GetConstraintSource, "GetConstraintSource(self, int) -> FbxObject");

extern "C" {static PyObject *meth_FbxConstraintScale_GetConstraintSource(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_GetConstraintSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxConstraintScale, &sipCpp, &a0))
        {
             ::FbxObject*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxConstraintScale::GetConstraintSource(a0) : sipCpp->GetConstraintSource(a0));

            return sipConvertFromType(sipRes,sipType_FbxObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_GetConstraintSource, doc_FbxConstraintScale_GetConstraintSource);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_SetConstrainedObject, "SetConstrainedObject(self, FbxObject)");

extern "C" {static PyObject *meth_FbxConstraintScale_SetConstrainedObject(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_SetConstrainedObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
         ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxConstraintScale, &sipCpp, sipType_FbxObject, &a0))
        {
            sipCpp->SetConstrainedObject(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_SetConstrainedObject, doc_FbxConstraintScale_SetConstrainedObject);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintScale_GetConstrainedObject, "GetConstrainedObject(self) -> FbxObject");

extern "C" {static PyObject *meth_FbxConstraintScale_GetConstrainedObject(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintScale_GetConstrainedObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxConstraintScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxConstraintScale, &sipCpp))
        {
             ::FbxObject*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxConstraintScale::GetConstrainedObject() : sipCpp->GetConstrainedObject());

            return sipConvertFromType(sipRes,sipType_FbxObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintScale, sipName_GetConstrainedObject, doc_FbxConstraintScale_GetConstrainedObject);

    return NULL;
}


extern "C" {static PyObject *slot_FbxConstraintScale___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxConstraintScale___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxConstraintScale));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxConstraintScale* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxConstraintScale, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxConstraintScale::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxConstraintScale, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxConstraintScale___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxConstraintScale___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxConstraintScale));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxConstraintScale* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxConstraintScale, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxConstraintScale::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxConstraintScale, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxConstraintScale(void *, const sipTypeDef *);}
static void *cast_FbxConstraintScale(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipCppV);

    if (targetType == sipType_FbxConstraint)
        return static_cast< ::FbxConstraint *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxConstraintScale(void *, int);}
static void release_FbxConstraintScale(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxConstraintScale[] = {{106, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxConstraintScale[] = {
    {(void *)slot_FbxConstraintScale___ne__, ne_slot},
    {(void *)slot_FbxConstraintScale___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxConstraintScale[] = {
    {SIP_MLNAME_CAST(sipName_AddConstraintSource), meth_FbxConstraintScale_AddConstraintSource, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_AddConstraintSource)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxConstraintScale_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_Create)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxConstraintScale_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetConstrainedObject), meth_FbxConstraintScale_GetConstrainedObject, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_GetConstrainedObject)},
    {SIP_MLNAME_CAST(sipName_GetConstraintSource), meth_FbxConstraintScale_GetConstraintSource, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_GetConstraintSource)},
    {SIP_MLNAME_CAST(sipName_GetConstraintSourceCount), meth_FbxConstraintScale_GetConstraintSourceCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_GetConstraintSourceCount)},
    {SIP_MLNAME_CAST(sipName_GetSourceWeight), meth_FbxConstraintScale_GetSourceWeight, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_GetSourceWeight)},
    {SIP_MLNAME_CAST(sipName_SetConstrainedObject), meth_FbxConstraintScale_SetConstrainedObject, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintScale_SetConstrainedObject)}
};


extern "C" {static PyObject *varget_FbxConstraintScale_Active(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_Active(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->Active;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintScale_Active(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_Active(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Active = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_AffectX(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_AffectX(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->AffectX;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintScale_AffectX(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_AffectX(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->AffectX = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_AffectY(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_AffectY(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->AffectY;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintScale_AffectY(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_AffectY(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->AffectY = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_AffectZ(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_AffectZ(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->AffectZ;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintScale_AffectZ(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_AffectZ(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->AffectZ = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxConstraintScale::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxConstraintScale_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxConstraintScale::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_ConstrainedObject(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_ConstrainedObject(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->ConstrainedObject;

    return sipConvertFromType(sipVal, sipType_FbxPropertyFbxReference, NULL);
}


extern "C" {static int varset_FbxConstraintScale_ConstrainedObject(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_ConstrainedObject(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyFbxReference *>(sipForceConvertToType(sipPy,sipType_FbxPropertyFbxReference,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ConstrainedObject = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_ConstraintSources(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_ConstraintSources(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->ConstraintSources;

    return sipConvertFromType(sipVal, sipType_FbxPropertyFbxReference, NULL);
}


extern "C" {static int varset_FbxConstraintScale_ConstraintSources(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_ConstraintSources(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyFbxReference *>(sipForceConvertToType(sipPy,sipType_FbxPropertyFbxReference,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ConstraintSources = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_Lock(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_Lock(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->Lock;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintScale_Lock(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_Lock(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Lock = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_Scaling(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_Scaling(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->Scaling;

    return sipConvertFromType(sipVal, sipType_FbxPropertyDouble3, NULL);
}


extern "C" {static int varset_FbxConstraintScale_Scaling(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_Scaling(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyDouble3 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyDouble3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Scaling = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintScale_Weight(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintScale_Weight(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    sipVal = &sipCpp->Weight;

    return sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, NULL);
}


extern "C" {static int varset_FbxConstraintScale_Weight(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintScale_Weight(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxConstraintScale *sipCpp = reinterpret_cast< ::FbxConstraintScale *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyDouble1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Weight = *sipVal;

    return 0;
}

sipVariableDef variables_FbxConstraintScale[] = {
    {InstanceVariable, sipName_Active, (PyMethodDef *)varget_FbxConstraintScale_Active, (PyMethodDef *)varset_FbxConstraintScale_Active, NULL, NULL},
    {InstanceVariable, sipName_AffectX, (PyMethodDef *)varget_FbxConstraintScale_AffectX, (PyMethodDef *)varset_FbxConstraintScale_AffectX, NULL, NULL},
    {InstanceVariable, sipName_AffectY, (PyMethodDef *)varget_FbxConstraintScale_AffectY, (PyMethodDef *)varset_FbxConstraintScale_AffectY, NULL, NULL},
    {InstanceVariable, sipName_AffectZ, (PyMethodDef *)varget_FbxConstraintScale_AffectZ, (PyMethodDef *)varset_FbxConstraintScale_AffectZ, NULL, NULL},
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxConstraintScale_ClassId, (PyMethodDef *)varset_FbxConstraintScale_ClassId, NULL, NULL},
    {InstanceVariable, sipName_ConstrainedObject, (PyMethodDef *)varget_FbxConstraintScale_ConstrainedObject, (PyMethodDef *)varset_FbxConstraintScale_ConstrainedObject, NULL, NULL},
    {InstanceVariable, sipName_ConstraintSources, (PyMethodDef *)varget_FbxConstraintScale_ConstraintSources, (PyMethodDef *)varset_FbxConstraintScale_ConstraintSources, NULL, NULL},
    {InstanceVariable, sipName_Lock, (PyMethodDef *)varget_FbxConstraintScale_Lock, (PyMethodDef *)varset_FbxConstraintScale_Lock, NULL, NULL},
    {InstanceVariable, sipName_Scaling, (PyMethodDef *)varget_FbxConstraintScale_Scaling, (PyMethodDef *)varset_FbxConstraintScale_Scaling, NULL, NULL},
    {InstanceVariable, sipName_Weight, (PyMethodDef *)varget_FbxConstraintScale_Weight, (PyMethodDef *)varset_FbxConstraintScale_Weight, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxConstraintScale = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxConstraintScale,
        {0},
        0
    },
    {
        sipNameNr_FbxConstraintScale,
        {0, 0, 1},
        8, methods_FbxConstraintScale,
        0, 0,
        10, variables_FbxConstraintScale,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxConstraintScale,
    slots_FbxConstraintScale,
    0,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    0,
    0,
    0,
    0,
    release_FbxConstraintScale,
    cast_FbxConstraintScale,
    0,
    0,
    0,
    0,
    0,
    0
};
