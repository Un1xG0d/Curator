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




PyDoc_STRVAR(doc_FbxSkin_Create, "Create(FbxManager, str) -> FbxSkin\n"
    "Create(FbxObject, str) -> FbxSkin");

extern "C" {static PyObject *meth_FbxSkin_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxSkin*sipRes;

            sipRes =  ::FbxSkin::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSkin,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxSkin*sipRes;

            sipRes =  ::FbxSkin::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSkin,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_Create, doc_FbxSkin_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxSkin_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxSkin::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetClassId, doc_FbxSkin_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_SetDeformAccuracy, "SetDeformAccuracy(self, float)");

extern "C" {static PyObject *meth_FbxSkin_SetDeformAccuracy(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_SetDeformAccuracy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxSkin, &sipCpp, &a0))
        {
            sipCpp->SetDeformAccuracy(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_SetDeformAccuracy, doc_FbxSkin_SetDeformAccuracy);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetDeformAccuracy, "GetDeformAccuracy(self) -> float");

extern "C" {static PyObject *meth_FbxSkin_GetDeformAccuracy(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetDeformAccuracy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->GetDeformAccuracy();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetDeformAccuracy, doc_FbxSkin_GetDeformAccuracy);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_SetGeometry, "SetGeometry(self, FbxGeometry) -> bool");

extern "C" {static PyObject *meth_FbxSkin_SetGeometry(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_SetGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxGeometry* a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSkin, &sipCpp, sipType_FbxGeometry, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->SetGeometry(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_SetGeometry, doc_FbxSkin_SetGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetGeometry, "GetGeometry(self) -> FbxGeometry");

extern "C" {static PyObject *meth_FbxSkin_GetGeometry(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
             ::FbxGeometry*sipRes;

            sipRes = sipCpp->GetGeometry();

            return sipConvertFromType(sipRes,sipType_FbxGeometry,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetGeometry, doc_FbxSkin_GetGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_AddCluster, "AddCluster(self, FbxCluster) -> bool");

extern "C" {static PyObject *meth_FbxSkin_AddCluster(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_AddCluster(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCluster* a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSkin, &sipCpp, sipType_FbxCluster, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->AddCluster(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_AddCluster, doc_FbxSkin_AddCluster);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_RemoveCluster, "RemoveCluster(self, FbxCluster) -> FbxCluster");

extern "C" {static PyObject *meth_FbxSkin_RemoveCluster(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_RemoveCluster(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCluster* a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSkin, &sipCpp, sipType_FbxCluster, &a0))
        {
             ::FbxCluster*sipRes;

            sipRes = sipCpp->RemoveCluster(a0);

            return sipConvertFromType(sipRes,sipType_FbxCluster,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_RemoveCluster, doc_FbxSkin_RemoveCluster);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetClusterCount, "GetClusterCount(self) -> int");

extern "C" {static PyObject *meth_FbxSkin_GetClusterCount(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetClusterCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetClusterCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetClusterCount, doc_FbxSkin_GetClusterCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetCluster, "GetCluster(self, int) -> FbxCluster");

extern "C" {static PyObject *meth_FbxSkin_GetCluster(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetCluster(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxSkin, &sipCpp, &a0))
        {
             ::FbxCluster*sipRes;

            sipRes = sipCpp->GetCluster(a0);

            return sipConvertFromType(sipRes,sipType_FbxCluster,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetCluster, doc_FbxSkin_GetCluster);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetDeformerType, "GetDeformerType(self) -> FbxDeformer.EDeformerType");

extern "C" {static PyObject *meth_FbxSkin_GetDeformerType(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetDeformerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
             ::FbxDeformer::EDeformerType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxSkin::GetDeformerType() : sipCpp->GetDeformerType());

            return sipConvertFromEnum(sipRes,sipType_FbxDeformer_EDeformerType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetDeformerType, doc_FbxSkin_GetDeformerType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_SetSkinningType, "SetSkinningType(self, FbxSkin.EType)");

extern "C" {static PyObject *meth_FbxSkin_SetSkinningType(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_SetSkinningType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSkin::EType a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxSkin, &sipCpp, sipType_FbxSkin_EType, &a0))
        {
            sipCpp->SetSkinningType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_SetSkinningType, doc_FbxSkin_SetSkinningType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetSkinningType, "GetSkinningType(self) -> FbxSkin.EType");

extern "C" {static PyObject *meth_FbxSkin_GetSkinningType(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetSkinningType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
             ::FbxSkin::EType sipRes;

            sipRes = sipCpp->GetSkinningType();

            return sipConvertFromEnum(sipRes,sipType_FbxSkin_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetSkinningType, doc_FbxSkin_GetSkinningType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_AddControlPointIndex, "AddControlPointIndex(self, int, float = 0)");

extern "C" {static PyObject *meth_FbxSkin_AddControlPointIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_AddControlPointIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        double a1 = 0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|d", &sipSelf, sipType_FbxSkin, &sipCpp, &a0, &a1))
        {
            sipCpp->AddControlPointIndex(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_AddControlPointIndex, doc_FbxSkin_AddControlPointIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetControlPointIndicesCount, "GetControlPointIndicesCount(self) -> int");

extern "C" {static PyObject *meth_FbxSkin_GetControlPointIndicesCount(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetControlPointIndicesCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetControlPointIndicesCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetControlPointIndicesCount, doc_FbxSkin_GetControlPointIndicesCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetControlPointIndices, "GetControlPointIndices(self) -> List");

extern "C" {static PyObject *meth_FbxSkin_GetControlPointIndices(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetControlPointIndices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 36 "/var/www/html/lib/fbxpy/sip/fbxskin.sip"
    int* indices;
    int indicesCount;

    indices = sipCpp->GetControlPointIndices();
    indicesCount = sipCpp->GetControlPointIndicesCount();

    if ((sipRes = PyList_New(indicesCount)) == NULL)
        return NULL;

    for (int i = 0; i < indicesCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, SIPLong_FromLong(*indices));
        indices++;
    }
#line 522 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxSkin.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetControlPointIndices, doc_FbxSkin_GetControlPointIndices);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_GetControlPointBlendWeights, "GetControlPointBlendWeights(self) -> List");

extern "C" {static PyObject *meth_FbxSkin_GetControlPointBlendWeights(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_GetControlPointBlendWeights(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSkin, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 54 "/var/www/html/lib/fbxpy/sip/fbxskin.sip"
    double* blendWeights;
    int indicesCount;

    blendWeights = sipCpp->GetControlPointBlendWeights();
    indicesCount = sipCpp->GetControlPointIndicesCount();

    if ((sipRes = PyList_New(indicesCount)) == NULL)
        return NULL;

    for (int i = 0; i < indicesCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*blendWeights));
        blendWeights++;
    }
#line 565 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxSkin.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_GetControlPointBlendWeights, doc_FbxSkin_GetControlPointBlendWeights);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSkin_SetControlPointIWCount, "SetControlPointIWCount(self, int)");

extern "C" {static PyObject *meth_FbxSkin_SetControlPointIWCount(PyObject *, PyObject *);}
static PyObject *meth_FbxSkin_SetControlPointIWCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxSkin *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxSkin, &sipCpp, &a0))
        {
            sipCpp->SetControlPointIWCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSkin, sipName_SetControlPointIWCount, doc_FbxSkin_SetControlPointIWCount);

    return NULL;
}


extern "C" {static PyObject *slot_FbxSkin___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxSkin___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSkin *sipCpp = reinterpret_cast< ::FbxSkin *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSkin));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSkin, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxSkin::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxSkin, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxSkin___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxSkin___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSkin *sipCpp = reinterpret_cast< ::FbxSkin *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSkin));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSkin* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSkin, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxSkin::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxSkin, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxSkin(void *, const sipTypeDef *);}
static void *cast_FbxSkin(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxSkin *sipCpp = reinterpret_cast< ::FbxSkin *>(sipCppV);

    if (targetType == sipType_FbxDeformer)
        return static_cast< ::FbxDeformer *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSkin(void *, int);}
static void release_FbxSkin(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxSkin[] = {{125, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSkin[] = {
    {(void *)slot_FbxSkin___ne__, ne_slot},
    {(void *)slot_FbxSkin___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSkin[] = {
    {SIP_MLNAME_CAST(sipName_AddCluster), meth_FbxSkin_AddCluster, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_AddCluster)},
    {SIP_MLNAME_CAST(sipName_AddControlPointIndex), meth_FbxSkin_AddControlPointIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_AddControlPointIndex)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxSkin_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_Create)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxSkin_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetCluster), meth_FbxSkin_GetCluster, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetCluster)},
    {SIP_MLNAME_CAST(sipName_GetClusterCount), meth_FbxSkin_GetClusterCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetClusterCount)},
    {SIP_MLNAME_CAST(sipName_GetControlPointBlendWeights), meth_FbxSkin_GetControlPointBlendWeights, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetControlPointBlendWeights)},
    {SIP_MLNAME_CAST(sipName_GetControlPointIndices), meth_FbxSkin_GetControlPointIndices, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetControlPointIndices)},
    {SIP_MLNAME_CAST(sipName_GetControlPointIndicesCount), meth_FbxSkin_GetControlPointIndicesCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetControlPointIndicesCount)},
    {SIP_MLNAME_CAST(sipName_GetDeformAccuracy), meth_FbxSkin_GetDeformAccuracy, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetDeformAccuracy)},
    {SIP_MLNAME_CAST(sipName_GetDeformerType), meth_FbxSkin_GetDeformerType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetDeformerType)},
    {SIP_MLNAME_CAST(sipName_GetGeometry), meth_FbxSkin_GetGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetGeometry)},
    {SIP_MLNAME_CAST(sipName_GetSkinningType), meth_FbxSkin_GetSkinningType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_GetSkinningType)},
    {SIP_MLNAME_CAST(sipName_RemoveCluster), meth_FbxSkin_RemoveCluster, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_RemoveCluster)},
    {SIP_MLNAME_CAST(sipName_SetControlPointIWCount), meth_FbxSkin_SetControlPointIWCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_SetControlPointIWCount)},
    {SIP_MLNAME_CAST(sipName_SetDeformAccuracy), meth_FbxSkin_SetDeformAccuracy, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_SetDeformAccuracy)},
    {SIP_MLNAME_CAST(sipName_SetGeometry), meth_FbxSkin_SetGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_SetGeometry)},
    {SIP_MLNAME_CAST(sipName_SetSkinningType), meth_FbxSkin_SetSkinningType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSkin_SetSkinningType)}
};

static sipEnumMemberDef enummembers_FbxSkin[] = {
    {sipName_eBlend, static_cast<int>( ::FbxSkin::eBlend), 340},
    {sipName_eDualQuaternion, static_cast<int>( ::FbxSkin::eDualQuaternion), 340},
    {sipName_eLinear, static_cast<int>( ::FbxSkin::eLinear), 340},
    {sipName_eRigid, static_cast<int>( ::FbxSkin::eRigid), 340},
};


extern "C" {static PyObject *varget_FbxSkin_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSkin_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxSkin::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxSkin_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxSkin_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxSkin::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxSkin[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxSkin_ClassId, (PyMethodDef *)varset_FbxSkin_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxSkin = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxSkin,
        {0},
        0
    },
    {
        sipNameNr_FbxSkin,
        {0, 0, 1},
        18, methods_FbxSkin,
        4, enummembers_FbxSkin,
        1, variables_FbxSkin,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxSkin,
    slots_FbxSkin,
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
    release_FbxSkin,
    cast_FbxSkin,
    0,
    0,
    0,
    0,
    0,
    0
};
