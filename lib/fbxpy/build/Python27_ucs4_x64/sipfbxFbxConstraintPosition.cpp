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




PyDoc_STRVAR(doc_FbxConstraintPosition_Create, "Create(FbxManager, str) -> FbxConstraintPosition\n"
    "Create(FbxObject, str) -> FbxConstraintPosition");

extern "C" {static PyObject *meth_FbxConstraintPosition_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxConstraintPosition*sipRes;

            sipRes =  ::FbxConstraintPosition::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxConstraintPosition,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxConstraintPosition*sipRes;

            sipRes =  ::FbxConstraintPosition::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxConstraintPosition,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_Create, doc_FbxConstraintPosition_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxConstraintPosition_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxConstraintPosition, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxConstraintPosition::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_GetClassId, doc_FbxConstraintPosition_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_AddConstraintSource, "AddConstraintSource(self, FbxObject, float = 100)");

extern "C" {static PyObject *meth_FbxConstraintPosition_AddConstraintSource(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_AddConstraintSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
        double a1 = 100;
         ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|d", &sipSelf, sipType_FbxConstraintPosition, &sipCpp, sipType_FbxObject, &a0, &a1))
        {
            sipCpp->AddConstraintSource(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_AddConstraintSource, doc_FbxConstraintPosition_AddConstraintSource);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_RemoveConstraintSource, "RemoveConstraintSource(self, FbxObject) -> bool");

extern "C" {static PyObject *meth_FbxConstraintPosition_RemoveConstraintSource(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_RemoveConstraintSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
         ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxConstraintPosition, &sipCpp, sipType_FbxObject, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveConstraintSource(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_RemoveConstraintSource, doc_FbxConstraintPosition_RemoveConstraintSource);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_GetConstraintSourceCount, "GetConstraintSourceCount(self) -> int");

extern "C" {static PyObject *meth_FbxConstraintPosition_GetConstraintSourceCount(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_GetConstraintSourceCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxConstraintPosition, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxConstraintPosition::GetConstraintSourceCount() : sipCpp->GetConstraintSourceCount());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_GetConstraintSourceCount, doc_FbxConstraintPosition_GetConstraintSourceCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_GetConstraintSource, "GetConstraintSource(self, int) -> FbxObject");

extern "C" {static PyObject *meth_FbxConstraintPosition_GetConstraintSource(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_GetConstraintSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxConstraintPosition, &sipCpp, &a0))
        {
             ::FbxObject*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxConstraintPosition::GetConstraintSource(a0) : sipCpp->GetConstraintSource(a0));

            return sipConvertFromType(sipRes,sipType_FbxObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_GetConstraintSource, doc_FbxConstraintPosition_GetConstraintSource);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_SetConstrainedObject, "SetConstrainedObject(self, FbxObject)");

extern "C" {static PyObject *meth_FbxConstraintPosition_SetConstrainedObject(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_SetConstrainedObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
         ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxConstraintPosition, &sipCpp, sipType_FbxObject, &a0))
        {
            sipCpp->SetConstrainedObject(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_SetConstrainedObject, doc_FbxConstraintPosition_SetConstrainedObject);

    return NULL;
}


PyDoc_STRVAR(doc_FbxConstraintPosition_GetConstrainedObject, "GetConstrainedObject(self) -> FbxObject");

extern "C" {static PyObject *meth_FbxConstraintPosition_GetConstrainedObject(PyObject *, PyObject *);}
static PyObject *meth_FbxConstraintPosition_GetConstrainedObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxConstraintPosition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxConstraintPosition, &sipCpp))
        {
             ::FbxObject*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxConstraintPosition::GetConstrainedObject() : sipCpp->GetConstrainedObject());

            return sipConvertFromType(sipRes,sipType_FbxObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxConstraintPosition, sipName_GetConstrainedObject, doc_FbxConstraintPosition_GetConstrainedObject);

    return NULL;
}


extern "C" {static PyObject *slot_FbxConstraintPosition___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxConstraintPosition___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxConstraintPosition));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxConstraintPosition* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxConstraintPosition, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxConstraintPosition::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxConstraintPosition, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxConstraintPosition___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxConstraintPosition___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxConstraintPosition));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxConstraintPosition* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxConstraintPosition, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxConstraintPosition::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxConstraintPosition, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxConstraintPosition(void *, const sipTypeDef *);}
static void *cast_FbxConstraintPosition(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipCppV);

    if (targetType == sipType_FbxConstraint)
        return static_cast< ::FbxConstraint *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxConstraintPosition(void *, int);}
static void release_FbxConstraintPosition(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxConstraintPosition[] = {{106, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxConstraintPosition[] = {
    {(void *)slot_FbxConstraintPosition___ne__, ne_slot},
    {(void *)slot_FbxConstraintPosition___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxConstraintPosition[] = {
    {SIP_MLNAME_CAST(sipName_AddConstraintSource), meth_FbxConstraintPosition_AddConstraintSource, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_AddConstraintSource)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxConstraintPosition_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_Create)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxConstraintPosition_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetConstrainedObject), meth_FbxConstraintPosition_GetConstrainedObject, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_GetConstrainedObject)},
    {SIP_MLNAME_CAST(sipName_GetConstraintSource), meth_FbxConstraintPosition_GetConstraintSource, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_GetConstraintSource)},
    {SIP_MLNAME_CAST(sipName_GetConstraintSourceCount), meth_FbxConstraintPosition_GetConstraintSourceCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_GetConstraintSourceCount)},
    {SIP_MLNAME_CAST(sipName_RemoveConstraintSource), meth_FbxConstraintPosition_RemoveConstraintSource, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_RemoveConstraintSource)},
    {SIP_MLNAME_CAST(sipName_SetConstrainedObject), meth_FbxConstraintPosition_SetConstrainedObject, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxConstraintPosition_SetConstrainedObject)}
};


extern "C" {static PyObject *varget_FbxConstraintPosition_Active(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_Active(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->Active;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_Active(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_Active(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Active = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_AffectX(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_AffectX(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->AffectX;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_AffectX(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_AffectX(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->AffectX = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_AffectY(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_AffectY(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->AffectY;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_AffectY(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_AffectY(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->AffectY = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_AffectZ(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_AffectZ(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->AffectZ;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_AffectZ(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_AffectZ(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->AffectZ = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxConstraintPosition::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxConstraintPosition::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_ConstrainedObject(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_ConstrainedObject(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->ConstrainedObject;

    return sipConvertFromType(sipVal, sipType_FbxPropertyFbxReference, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_ConstrainedObject(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_ConstrainedObject(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyFbxReference *>(sipForceConvertToType(sipPy,sipType_FbxPropertyFbxReference,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ConstrainedObject = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_ConstraintSources(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_ConstraintSources(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->ConstraintSources;

    return sipConvertFromType(sipVal, sipType_FbxPropertyFbxReference, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_ConstraintSources(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_ConstraintSources(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyFbxReference*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyFbxReference *>(sipForceConvertToType(sipPy,sipType_FbxPropertyFbxReference,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->ConstraintSources = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_Lock(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_Lock(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->Lock;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_Lock(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_Lock(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Lock = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_Translation(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_Translation(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->Translation;

    return sipConvertFromType(sipVal, sipType_FbxPropertyDouble3, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_Translation(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_Translation(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble3*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyDouble3 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyDouble3,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Translation = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxConstraintPosition_Weight(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxConstraintPosition_Weight(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    sipVal = &sipCpp->Weight;

    return sipConvertFromType(sipVal, sipType_FbxPropertyDouble1, NULL);
}


extern "C" {static int varset_FbxConstraintPosition_Weight(void *, PyObject *, PyObject *);}
static int varset_FbxConstraintPosition_Weight(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyDouble1*sipVal;
     ::FbxConstraintPosition *sipCpp = reinterpret_cast< ::FbxConstraintPosition *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyDouble1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyDouble1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->Weight = *sipVal;

    return 0;
}

sipVariableDef variables_FbxConstraintPosition[] = {
    {InstanceVariable, sipName_Active, (PyMethodDef *)varget_FbxConstraintPosition_Active, (PyMethodDef *)varset_FbxConstraintPosition_Active, NULL, NULL},
    {InstanceVariable, sipName_AffectX, (PyMethodDef *)varget_FbxConstraintPosition_AffectX, (PyMethodDef *)varset_FbxConstraintPosition_AffectX, NULL, NULL},
    {InstanceVariable, sipName_AffectY, (PyMethodDef *)varget_FbxConstraintPosition_AffectY, (PyMethodDef *)varset_FbxConstraintPosition_AffectY, NULL, NULL},
    {InstanceVariable, sipName_AffectZ, (PyMethodDef *)varget_FbxConstraintPosition_AffectZ, (PyMethodDef *)varset_FbxConstraintPosition_AffectZ, NULL, NULL},
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxConstraintPosition_ClassId, (PyMethodDef *)varset_FbxConstraintPosition_ClassId, NULL, NULL},
    {InstanceVariable, sipName_ConstrainedObject, (PyMethodDef *)varget_FbxConstraintPosition_ConstrainedObject, (PyMethodDef *)varset_FbxConstraintPosition_ConstrainedObject, NULL, NULL},
    {InstanceVariable, sipName_ConstraintSources, (PyMethodDef *)varget_FbxConstraintPosition_ConstraintSources, (PyMethodDef *)varset_FbxConstraintPosition_ConstraintSources, NULL, NULL},
    {InstanceVariable, sipName_Lock, (PyMethodDef *)varget_FbxConstraintPosition_Lock, (PyMethodDef *)varset_FbxConstraintPosition_Lock, NULL, NULL},
    {InstanceVariable, sipName_Translation, (PyMethodDef *)varget_FbxConstraintPosition_Translation, (PyMethodDef *)varset_FbxConstraintPosition_Translation, NULL, NULL},
    {InstanceVariable, sipName_Weight, (PyMethodDef *)varget_FbxConstraintPosition_Weight, (PyMethodDef *)varset_FbxConstraintPosition_Weight, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxConstraintPosition = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxConstraintPosition,
        {0},
        0
    },
    {
        sipNameNr_FbxConstraintPosition,
        {0, 0, 1},
        8, methods_FbxConstraintPosition,
        0, 0,
        10, variables_FbxConstraintPosition,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxConstraintPosition,
    slots_FbxConstraintPosition,
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
    release_FbxConstraintPosition,
    cast_FbxConstraintPosition,
    0,
    0,
    0,
    0,
    0,
    0
};
