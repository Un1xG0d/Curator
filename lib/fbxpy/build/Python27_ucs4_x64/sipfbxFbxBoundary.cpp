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


#line 4 "/var/www/html/lib/fbxpy/sip/fbxstatus.sip"
#include <fbxsdk.h>
#line 44 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxBoundary.cpp"


PyDoc_STRVAR(doc_FbxBoundary_Create, "Create(FbxManager, str) -> FbxBoundary\n"
    "Create(FbxObject, str) -> FbxBoundary");

extern "C" {static PyObject *meth_FbxBoundary_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxBoundary*sipRes;

            sipRes =  ::FbxBoundary::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxBoundary,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxBoundary*sipRes;

            sipRes =  ::FbxBoundary::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxBoundary,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_Create, doc_FbxBoundary_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxBoundary_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBoundary, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxBoundary::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_GetClassId, doc_FbxBoundary_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_AddCurve, "AddCurve(self, FbxNurbsCurve)");

extern "C" {static PyObject *meth_FbxBoundary_AddCurve(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_AddCurve(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNurbsCurve* a0;
         ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxBoundary, &sipCpp, sipType_FbxNurbsCurve, &a0))
        {
            sipCpp->AddCurve(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_AddCurve, doc_FbxBoundary_AddCurve);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_GetCurveCount, "GetCurveCount(self) -> int");

extern "C" {static PyObject *meth_FbxBoundary_GetCurveCount(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_GetCurveCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBoundary, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCurveCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_GetCurveCount, doc_FbxBoundary_GetCurveCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_GetCurve, "GetCurve(self, int) -> FbxNurbsCurve");

extern "C" {static PyObject *meth_FbxBoundary_GetCurve(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_GetCurve(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxBoundary, &sipCpp, &a0))
        {
             ::FbxNurbsCurve*sipRes;

            sipRes = sipCpp->GetCurve(a0);

            return sipConvertFromType(sipRes,sipType_FbxNurbsCurve,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_GetCurve, doc_FbxBoundary_GetCurve);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxBoundary_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBoundary, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxBoundary::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(sipRes,sipType_FbxNodeAttribute_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_GetAttributeType, doc_FbxBoundary_GetAttributeType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_IsPointInControlHull, "IsPointInControlHull(self, FbxVector4) -> bool");

extern "C" {static PyObject *meth_FbxBoundary_IsPointInControlHull(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_IsPointInControlHull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;
         ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxBoundary, &sipCpp, sipType_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->IsPointInControlHull(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_IsPointInControlHull, doc_FbxBoundary_IsPointInControlHull);

    return NULL;
}


PyDoc_STRVAR(doc_FbxBoundary_ComputePointInBoundary, "ComputePointInBoundary(self) -> FbxVector4");

extern "C" {static PyObject *meth_FbxBoundary_ComputePointInBoundary(PyObject *, PyObject *);}
static PyObject *meth_FbxBoundary_ComputePointInBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxBoundary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxBoundary, &sipCpp))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->ComputePointInBoundary());

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxBoundary, sipName_ComputePointInBoundary, doc_FbxBoundary_ComputePointInBoundary);

    return NULL;
}


extern "C" {static PyObject *slot_FbxBoundary___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxBoundary___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxBoundary *sipCpp = reinterpret_cast< ::FbxBoundary *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxBoundary));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxBoundary* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxBoundary, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxBoundary::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxBoundary, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxBoundary___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxBoundary___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxBoundary *sipCpp = reinterpret_cast< ::FbxBoundary *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxBoundary));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxBoundary* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxBoundary, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxBoundary::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxBoundary, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxBoundary(void *, const sipTypeDef *);}
static void *cast_FbxBoundary(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxBoundary *sipCpp = reinterpret_cast< ::FbxBoundary *>(sipCppV);

    if (targetType == sipType_FbxGeometry)
        return static_cast< ::FbxGeometry *>(sipCpp);

    if (targetType == sipType_FbxGeometryBase)
        return static_cast< ::FbxGeometryBase *>(sipCpp);

    if (targetType == sipType_FbxLayerContainer)
        return static_cast< ::FbxLayerContainer *>(sipCpp);

    if (targetType == sipType_FbxNodeAttribute)
        return static_cast< ::FbxNodeAttribute *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxBoundary(void *, int);}
static void release_FbxBoundary(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxBoundary[] = {{147, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxBoundary[] = {
    {(void *)slot_FbxBoundary___ne__, ne_slot},
    {(void *)slot_FbxBoundary___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxBoundary[] = {
    {SIP_MLNAME_CAST(sipName_AddCurve), meth_FbxBoundary_AddCurve, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_AddCurve)},
    {SIP_MLNAME_CAST(sipName_ComputePointInBoundary), meth_FbxBoundary_ComputePointInBoundary, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_ComputePointInBoundary)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxBoundary_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_Create)},
    {SIP_MLNAME_CAST(sipName_GetAttributeType), meth_FbxBoundary_GetAttributeType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_GetAttributeType)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxBoundary_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetCurve), meth_FbxBoundary_GetCurve, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_GetCurve)},
    {SIP_MLNAME_CAST(sipName_GetCurveCount), meth_FbxBoundary_GetCurveCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_GetCurveCount)},
    {SIP_MLNAME_CAST(sipName_IsPointInControlHull), meth_FbxBoundary_IsPointInControlHull, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxBoundary_IsPointInControlHull)}
};


extern "C" {static PyObject *varget_FbxBoundary_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxBoundary_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxBoundary::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxBoundary_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxBoundary_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxBoundary::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxBoundary_OuterFlag(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxBoundary_OuterFlag(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxBoundary *sipCpp = reinterpret_cast< ::FbxBoundary *>(sipSelf);

    sipVal = &sipCpp->OuterFlag;

    return sipConvertFromType(sipVal, sipType_FbxPropertyBool1, NULL);
}


extern "C" {static int varset_FbxBoundary_OuterFlag(void *, PyObject *, PyObject *);}
static int varset_FbxBoundary_OuterFlag(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyBool1*sipVal;
     ::FbxBoundary *sipCpp = reinterpret_cast< ::FbxBoundary *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyBool1 *>(sipForceConvertToType(sipPy,sipType_FbxPropertyBool1,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->OuterFlag = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxBoundary_sOuterFlag(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxBoundary_sOuterFlag(void *, PyObject *, PyObject *)
{
    static PyObject *sipPy = NULL;
    const char*sipVal;

    if (sipPy)
    {
        Py_INCREF(sipPy);
        return sipPy;
    }

    sipVal =  ::FbxBoundary::sOuterFlag;

    if (sipVal == NULL)
    {
        Py_INCREF(Py_None);
        return Py_None;
    }

#if PY_MAJOR_VERSION >= 3
    return PyUnicode_FromString(sipVal);
#else
    return PyUnicode_DecodeUTF8(sipVal, strlen(sipVal), NULL);
#endif
}


extern "C" {static int varset_FbxBoundary_sOuterFlag(void *, PyObject *, PyObject *);}
static int varset_FbxBoundary_sOuterFlag(void *, PyObject *sipPy, PyObject *)
{
    const char*sipVal;
    sipVal = sipString_AsUTF8String(&sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

     ::FbxBoundary::sOuterFlag = sipVal;

    static PyObject *sipKeep = 0;

    Py_XDECREF(sipKeep);
    sipKeep = sipPy;
    Py_INCREF(sipKeep);

    return 0;
}

sipVariableDef variables_FbxBoundary[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxBoundary_ClassId, (PyMethodDef *)varset_FbxBoundary_ClassId, NULL, NULL},
    {InstanceVariable, sipName_OuterFlag, (PyMethodDef *)varget_FbxBoundary_OuterFlag, (PyMethodDef *)varset_FbxBoundary_OuterFlag, NULL, NULL},
    {ClassVariable, sipName_sOuterFlag, (PyMethodDef *)varget_FbxBoundary_sOuterFlag, (PyMethodDef *)varset_FbxBoundary_sOuterFlag, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxBoundary = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxBoundary,
        {0},
        0
    },
    {
        sipNameNr_FbxBoundary,
        {0, 0, 1},
        8, methods_FbxBoundary,
        0, 0,
        3, variables_FbxBoundary,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxBoundary,
    slots_FbxBoundary,
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
    release_FbxBoundary,
    cast_FbxBoundary,
    0,
    0,
    0,
    0,
    0,
    0
};
