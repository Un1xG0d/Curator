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
#line 44 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxNurbsCurve.cpp"


PyDoc_STRVAR(doc_FbxNurbsCurve_Create, "Create(FbxManager, str) -> FbxNurbsCurve\n"
    "Create(FbxObject, str) -> FbxNurbsCurve");

extern "C" {static PyObject *meth_FbxNurbsCurve_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxNurbsCurve*sipRes;

            sipRes =  ::FbxNurbsCurve::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNurbsCurve,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxNurbsCurve*sipRes;

            sipRes =  ::FbxNurbsCurve::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNurbsCurve,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_Create, doc_FbxNurbsCurve_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxNurbsCurve::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetClassId, doc_FbxNurbsCurve_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxNurbsCurve::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(sipRes,sipType_FbxNodeAttribute_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetAttributeType, doc_FbxNurbsCurve_GetAttributeType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_InitControlPoints, "InitControlPoints(self, int, FbxNurbsCurve.EType)");

extern "C" {static PyObject *meth_FbxNurbsCurve_InitControlPoints(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_InitControlPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxNurbsCurve::EType a1;
         ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiE", &sipSelf, sipType_FbxNurbsCurve, &sipCpp, &a0, sipType_FbxNurbsCurve_EType, &a1))
        {
            sipCpp->InitControlPoints(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_InitControlPoints, doc_FbxNurbsCurve_InitControlPoints);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetKnotVector, "GetKnotVector(self) -> List");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetKnotVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetKnotVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 30 "/var/www/html/lib/fbxpy/sip/fbxnurbcurve.sip"
    double * knots = sipCpp->GetKnotVector();
    int knotcount = sipCpp->GetKnotCount();

    if ((sipRes = PyList_New(knotcount)) == NULL)
        return NULL;

    for (int i = 0; i < knotcount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*knots));
        knots++;
    }
#line 210 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxNurbsCurve.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetKnotVector, doc_FbxNurbsCurve_GetKnotVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetKnotCount, "GetKnotCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetKnotCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetKnotCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetKnotCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetKnotCount, doc_FbxNurbsCurve_GetKnotCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_SetOrder, "SetOrder(self, int)");

extern "C" {static PyObject *meth_FbxNurbsCurve_SetOrder(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_SetOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxNurbsCurve, &sipCpp, &a0))
        {
            sipCpp->SetOrder(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_SetOrder, doc_FbxNurbsCurve_SetOrder);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetOrder, "GetOrder(self) -> int");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetOrder(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetOrder();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetOrder, doc_FbxNurbsCurve_GetOrder);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_SetDimension, "SetDimension(self, FbxNurbsCurve.EDimension)");

extern "C" {static PyObject *meth_FbxNurbsCurve_SetDimension(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_SetDimension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNurbsCurve::EDimension a0;
         ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxNurbsCurve, &sipCpp, sipType_FbxNurbsCurve_EDimension, &a0))
        {
            sipCpp->SetDimension(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_SetDimension, doc_FbxNurbsCurve_SetDimension);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetDimension, "GetDimension(self) -> FbxNurbsCurve.EDimension");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetDimension(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetDimension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
             ::FbxNurbsCurve::EDimension sipRes;

            sipRes = sipCpp->GetDimension();

            return sipConvertFromEnum(sipRes,sipType_FbxNurbsCurve_EDimension);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetDimension, doc_FbxNurbsCurve_GetDimension);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_IsRational, "IsRational(self) -> bool");

extern "C" {static PyObject *meth_FbxNurbsCurve_IsRational(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_IsRational(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsRational();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_IsRational, doc_FbxNurbsCurve_IsRational);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetSpanCount, "GetSpanCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetSpanCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetSpanCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetSpanCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetSpanCount, doc_FbxNurbsCurve_GetSpanCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_GetType, "GetType(self) -> FbxNurbsCurve.EType");

extern "C" {static PyObject *meth_FbxNurbsCurve_GetType(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_GetType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
             ::FbxNurbsCurve::EType sipRes;

            sipRes = sipCpp->GetType();

            return sipConvertFromEnum(sipRes,sipType_FbxNurbsCurve_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_GetType, doc_FbxNurbsCurve_GetType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_IsPolyline, "IsPolyline(self) -> bool");

extern "C" {static PyObject *meth_FbxNurbsCurve_IsPolyline(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_IsPolyline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsPolyline();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_IsPolyline, doc_FbxNurbsCurve_IsPolyline);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbsCurve_IsBezier, "IsBezier(self) -> bool");

extern "C" {static PyObject *meth_FbxNurbsCurve_IsBezier(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbsCurve_IsBezier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNurbsCurve *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbsCurve, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsBezier();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbsCurve, sipName_IsBezier, doc_FbxNurbsCurve_IsBezier);

    return NULL;
}


extern "C" {static PyObject *slot_FbxNurbsCurve___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxNurbsCurve___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNurbsCurve *sipCpp = reinterpret_cast< ::FbxNurbsCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNurbsCurve));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxNurbsCurve, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxNurbsCurve::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxNurbsCurve, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxNurbsCurve___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxNurbsCurve___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNurbsCurve *sipCpp = reinterpret_cast< ::FbxNurbsCurve *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNurbsCurve));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsCurve* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxNurbsCurve, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxNurbsCurve::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxNurbsCurve, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxNurbsCurve(void *, const sipTypeDef *);}
static void *cast_FbxNurbsCurve(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxNurbsCurve *sipCpp = reinterpret_cast< ::FbxNurbsCurve *>(sipCppV);

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
extern "C" {static void release_FbxNurbsCurve(void *, int);}
static void release_FbxNurbsCurve(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxNurbsCurve[] = {{147, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxNurbsCurve[] = {
    {(void *)slot_FbxNurbsCurve___ne__, ne_slot},
    {(void *)slot_FbxNurbsCurve___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxNurbsCurve[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxNurbsCurve_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_Create)},
    {SIP_MLNAME_CAST(sipName_GetAttributeType), meth_FbxNurbsCurve_GetAttributeType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetAttributeType)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxNurbsCurve_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetDimension), meth_FbxNurbsCurve_GetDimension, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetDimension)},
    {SIP_MLNAME_CAST(sipName_GetKnotCount), meth_FbxNurbsCurve_GetKnotCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetKnotCount)},
    {SIP_MLNAME_CAST(sipName_GetKnotVector), meth_FbxNurbsCurve_GetKnotVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetKnotVector)},
    {SIP_MLNAME_CAST(sipName_GetOrder), meth_FbxNurbsCurve_GetOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetOrder)},
    {SIP_MLNAME_CAST(sipName_GetSpanCount), meth_FbxNurbsCurve_GetSpanCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetSpanCount)},
    {SIP_MLNAME_CAST(sipName_GetType), meth_FbxNurbsCurve_GetType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_GetType)},
    {SIP_MLNAME_CAST(sipName_InitControlPoints), meth_FbxNurbsCurve_InitControlPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_InitControlPoints)},
    {SIP_MLNAME_CAST(sipName_IsBezier), meth_FbxNurbsCurve_IsBezier, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_IsBezier)},
    {SIP_MLNAME_CAST(sipName_IsPolyline), meth_FbxNurbsCurve_IsPolyline, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_IsPolyline)},
    {SIP_MLNAME_CAST(sipName_IsRational), meth_FbxNurbsCurve_IsRational, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_IsRational)},
    {SIP_MLNAME_CAST(sipName_SetDimension), meth_FbxNurbsCurve_SetDimension, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_SetDimension)},
    {SIP_MLNAME_CAST(sipName_SetOrder), meth_FbxNurbsCurve_SetOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbsCurve_SetOrder)}
};

static sipEnumMemberDef enummembers_FbxNurbsCurve[] = {
    {sipName_e2D, static_cast<int>( ::FbxNurbsCurve::e2D), 240},
    {sipName_e3D, static_cast<int>( ::FbxNurbsCurve::e3D), 240},
    {sipName_eClosed, static_cast<int>( ::FbxNurbsCurve::eClosed), 241},
    {sipName_eOpen, static_cast<int>( ::FbxNurbsCurve::eOpen), 241},
    {sipName_ePeriodic, static_cast<int>( ::FbxNurbsCurve::ePeriodic), 241},
};


extern "C" {static PyObject *varget_FbxNurbsCurve_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxNurbsCurve_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxNurbsCurve::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxNurbsCurve_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxNurbsCurve_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxNurbsCurve::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxNurbsCurve[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxNurbsCurve_ClassId, (PyMethodDef *)varset_FbxNurbsCurve_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxNurbsCurve = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxNurbsCurve,
        {0},
        0
    },
    {
        sipNameNr_FbxNurbsCurve,
        {0, 0, 1},
        15, methods_FbxNurbsCurve,
        5, enummembers_FbxNurbsCurve,
        1, variables_FbxNurbsCurve,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxNurbsCurve,
    slots_FbxNurbsCurve,
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
    release_FbxNurbsCurve,
    cast_FbxNurbsCurve,
    0,
    0,
    0,
    0,
    0,
    0
};
