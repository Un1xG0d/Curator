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




PyDoc_STRVAR(doc_FbxCluster_Create, "Create(FbxManager, str) -> FbxCluster\n"
    "Create(FbxObject, str) -> FbxCluster");

extern "C" {static PyObject *meth_FbxCluster_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxCluster*sipRes;

            sipRes =  ::FbxCluster::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxCluster,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxCluster*sipRes;

            sipRes =  ::FbxCluster::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxCluster,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_Create, doc_FbxCluster_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxCluster_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxCluster::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetClassId, doc_FbxCluster_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetSubDeformerType, "GetSubDeformerType(self) -> FbxSubDeformer.EType");

extern "C" {static PyObject *meth_FbxCluster_GetSubDeformerType(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetSubDeformerType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
             ::FbxSubDeformer::EType sipRes;

            sipRes = sipCpp->GetSubDeformerType();

            return sipConvertFromEnum(sipRes,sipType_FbxSubDeformer_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetSubDeformerType, doc_FbxCluster_GetSubDeformerType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxCluster_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_Reset, doc_FbxCluster_Reset);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetLinkMode, "SetLinkMode(self, FbxCluster.ELinkMode)");

extern "C" {static PyObject *meth_FbxCluster_SetLinkMode(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetLinkMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCluster::ELinkMode a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxCluster_ELinkMode, &a0))
        {
            sipCpp->SetLinkMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetLinkMode, doc_FbxCluster_SetLinkMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetLinkMode, "GetLinkMode(self) -> FbxCluster.ELinkMode");

extern "C" {static PyObject *meth_FbxCluster_GetLinkMode(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetLinkMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
             ::FbxCluster::ELinkMode sipRes;

            sipRes = sipCpp->GetLinkMode();

            return sipConvertFromEnum(sipRes,sipType_FbxCluster_ELinkMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetLinkMode, doc_FbxCluster_GetLinkMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetLink, "SetLink(self, FbxNode)");

extern "C" {static PyObject *meth_FbxCluster_SetLink(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetLink(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNode* a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxNode, &a0))
        {
            sipCpp->SetLink(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetLink, doc_FbxCluster_SetLink);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetLink, "GetLink(self) -> FbxNode");

extern "C" {static PyObject *meth_FbxCluster_GetLink(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetLink(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
             ::FbxNode*sipRes;

            sipRes = sipCpp->GetLink();

            return sipConvertFromType(sipRes,sipType_FbxNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetLink, doc_FbxCluster_GetLink);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetAssociateModel, "SetAssociateModel(self, FbxNode)");

extern "C" {static PyObject *meth_FbxCluster_SetAssociateModel(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetAssociateModel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNode* a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxNode, &a0))
        {
            sipCpp->SetAssociateModel(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetAssociateModel, doc_FbxCluster_SetAssociateModel);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetAssociateModel, "GetAssociateModel(self) -> FbxNode");

extern "C" {static PyObject *meth_FbxCluster_GetAssociateModel(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetAssociateModel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
             ::FbxNode*sipRes;

            sipRes = sipCpp->GetAssociateModel();

            return sipConvertFromType(sipRes,sipType_FbxNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetAssociateModel, doc_FbxCluster_GetAssociateModel);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_AddControlPointIndex, "AddControlPointIndex(self, int, float)");

extern "C" {static PyObject *meth_FbxCluster_AddControlPointIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_AddControlPointIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        double a1;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bid", &sipSelf, sipType_FbxCluster, &sipCpp, &a0, &a1))
        {
            sipCpp->AddControlPointIndex(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_AddControlPointIndex, doc_FbxCluster_AddControlPointIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetControlPointIndicesCount, "GetControlPointIndicesCount(self) -> int");

extern "C" {static PyObject *meth_FbxCluster_GetControlPointIndicesCount(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetControlPointIndicesCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetControlPointIndicesCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetControlPointIndicesCount, doc_FbxCluster_GetControlPointIndicesCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetControlPointIndices, "GetControlPointIndices(self) -> List");

extern "C" {static PyObject *meth_FbxCluster_GetControlPointIndices(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetControlPointIndices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 50 "/var/www/html/lib/fbxpy/sip/fbxcluster.sip"
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
#line 432 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxCluster.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetControlPointIndices, doc_FbxCluster_GetControlPointIndices);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetControlPointWeights, "GetControlPointWeights(self) -> List");

extern "C" {static PyObject *meth_FbxCluster_GetControlPointWeights(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetControlPointWeights(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 68 "/var/www/html/lib/fbxpy/sip/fbxcluster.sip"
    double* weights;
    int indicesCount;

    weights = sipCpp->GetControlPointWeights();
    indicesCount = sipCpp->GetControlPointIndicesCount();

    if ((sipRes = PyList_New(indicesCount)) == NULL)
        return NULL;

    for (int i = 0; i < indicesCount; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*weights));
        weights++;
    }
#line 475 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxCluster.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetControlPointWeights, doc_FbxCluster_GetControlPointWeights);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetControlPointIWCount, "SetControlPointIWCount(self, int)");

extern "C" {static PyObject *meth_FbxCluster_SetControlPointIWCount(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetControlPointIWCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxCluster, &sipCpp, &a0))
        {
            sipCpp->SetControlPointIWCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetControlPointIWCount, doc_FbxCluster_SetControlPointIWCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetTransformMatrix, "SetTransformMatrix(self, FbxAMatrix)");

extern "C" {static PyObject *meth_FbxCluster_SetTransformMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetTransformMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAMatrix* a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
            sipCpp->SetTransformMatrix(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetTransformMatrix, doc_FbxCluster_SetTransformMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetTransformMatrix, "GetTransformMatrix(self, FbxAMatrix) -> FbxAMatrix");

extern "C" {static PyObject *meth_FbxCluster_GetTransformMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetTransformMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxAMatrix* a0;
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
             ::FbxAMatrix*sipRes;

            sipRes = &sipCpp->GetTransformMatrix(*a0);

            return sipConvertFromType(sipRes,sipType_FbxAMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetTransformMatrix, doc_FbxCluster_GetTransformMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetTransformLinkMatrix, "SetTransformLinkMatrix(self, FbxAMatrix)");

extern "C" {static PyObject *meth_FbxCluster_SetTransformLinkMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetTransformLinkMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAMatrix* a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
            sipCpp->SetTransformLinkMatrix(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetTransformLinkMatrix, doc_FbxCluster_SetTransformLinkMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetTransformLinkMatrix, "GetTransformLinkMatrix(self, FbxAMatrix) -> FbxAMatrix");

extern "C" {static PyObject *meth_FbxCluster_GetTransformLinkMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetTransformLinkMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxAMatrix* a0;
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
             ::FbxAMatrix*sipRes;

            sipRes = &sipCpp->GetTransformLinkMatrix(*a0);

            return sipConvertFromType(sipRes,sipType_FbxAMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetTransformLinkMatrix, doc_FbxCluster_GetTransformLinkMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetTransformAssociateModelMatrix, "SetTransformAssociateModelMatrix(self, FbxAMatrix)");

extern "C" {static PyObject *meth_FbxCluster_SetTransformAssociateModelMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetTransformAssociateModelMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAMatrix* a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
            sipCpp->SetTransformAssociateModelMatrix(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetTransformAssociateModelMatrix, doc_FbxCluster_SetTransformAssociateModelMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetTransformAssociateModelMatrix, "GetTransformAssociateModelMatrix(self, FbxAMatrix) -> FbxAMatrix");

extern "C" {static PyObject *meth_FbxCluster_GetTransformAssociateModelMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetTransformAssociateModelMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxAMatrix* a0;
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
             ::FbxAMatrix*sipRes;

            sipRes = &sipCpp->GetTransformAssociateModelMatrix(*a0);

            return sipConvertFromType(sipRes,sipType_FbxAMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetTransformAssociateModelMatrix, doc_FbxCluster_GetTransformAssociateModelMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_SetTransformParentMatrix, "SetTransformParentMatrix(self, FbxAMatrix)");

extern "C" {static PyObject *meth_FbxCluster_SetTransformParentMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_SetTransformParentMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAMatrix* a0;
         ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
            sipCpp->SetTransformParentMatrix(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_SetTransformParentMatrix, doc_FbxCluster_SetTransformParentMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_GetTransformParentMatrix, "GetTransformParentMatrix(self, FbxAMatrix) -> FbxAMatrix");

extern "C" {static PyObject *meth_FbxCluster_GetTransformParentMatrix(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_GetTransformParentMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxAMatrix* a0;
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxCluster, &sipCpp, sipType_FbxAMatrix, &a0))
        {
             ::FbxAMatrix*sipRes;

            sipRes = &sipCpp->GetTransformParentMatrix(*a0);

            return sipConvertFromType(sipRes,sipType_FbxAMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_GetTransformParentMatrix, doc_FbxCluster_GetTransformParentMatrix);

    return NULL;
}


PyDoc_STRVAR(doc_FbxCluster_IsTransformParentSet, "IsTransformParentSet(self) -> bool");

extern "C" {static PyObject *meth_FbxCluster_IsTransformParentSet(PyObject *, PyObject *);}
static PyObject *meth_FbxCluster_IsTransformParentSet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxCluster, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsTransformParentSet();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxCluster, sipName_IsTransformParentSet, doc_FbxCluster_IsTransformParentSet);

    return NULL;
}


extern "C" {static PyObject *slot_FbxCluster___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxCluster___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxCluster *sipCpp = reinterpret_cast< ::FbxCluster *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxCluster));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxCluster, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxCluster::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxCluster, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxCluster___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxCluster___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxCluster *sipCpp = reinterpret_cast< ::FbxCluster *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxCluster));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxCluster* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxCluster, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxCluster::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxCluster, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxCluster(void *, const sipTypeDef *);}
static void *cast_FbxCluster(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxCluster *sipCpp = reinterpret_cast< ::FbxCluster *>(sipCppV);

    if (targetType == sipType_FbxSubDeformer)
        return static_cast< ::FbxSubDeformer *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxCluster(void *, int);}
static void release_FbxCluster(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxCluster[] = {{348, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxCluster[] = {
    {(void *)slot_FbxCluster___ne__, ne_slot},
    {(void *)slot_FbxCluster___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxCluster[] = {
    {SIP_MLNAME_CAST(sipName_AddControlPointIndex), meth_FbxCluster_AddControlPointIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_AddControlPointIndex)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxCluster_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_Create)},
    {SIP_MLNAME_CAST(sipName_GetAssociateModel), meth_FbxCluster_GetAssociateModel, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetAssociateModel)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxCluster_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetControlPointIndices), meth_FbxCluster_GetControlPointIndices, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetControlPointIndices)},
    {SIP_MLNAME_CAST(sipName_GetControlPointIndicesCount), meth_FbxCluster_GetControlPointIndicesCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetControlPointIndicesCount)},
    {SIP_MLNAME_CAST(sipName_GetControlPointWeights), meth_FbxCluster_GetControlPointWeights, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetControlPointWeights)},
    {SIP_MLNAME_CAST(sipName_GetLink), meth_FbxCluster_GetLink, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetLink)},
    {SIP_MLNAME_CAST(sipName_GetLinkMode), meth_FbxCluster_GetLinkMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetLinkMode)},
    {SIP_MLNAME_CAST(sipName_GetSubDeformerType), meth_FbxCluster_GetSubDeformerType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetSubDeformerType)},
    {SIP_MLNAME_CAST(sipName_GetTransformAssociateModelMatrix), meth_FbxCluster_GetTransformAssociateModelMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetTransformAssociateModelMatrix)},
    {SIP_MLNAME_CAST(sipName_GetTransformLinkMatrix), meth_FbxCluster_GetTransformLinkMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetTransformLinkMatrix)},
    {SIP_MLNAME_CAST(sipName_GetTransformMatrix), meth_FbxCluster_GetTransformMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetTransformMatrix)},
    {SIP_MLNAME_CAST(sipName_GetTransformParentMatrix), meth_FbxCluster_GetTransformParentMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_GetTransformParentMatrix)},
    {SIP_MLNAME_CAST(sipName_IsTransformParentSet), meth_FbxCluster_IsTransformParentSet, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_IsTransformParentSet)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_FbxCluster_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_Reset)},
    {SIP_MLNAME_CAST(sipName_SetAssociateModel), meth_FbxCluster_SetAssociateModel, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetAssociateModel)},
    {SIP_MLNAME_CAST(sipName_SetControlPointIWCount), meth_FbxCluster_SetControlPointIWCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetControlPointIWCount)},
    {SIP_MLNAME_CAST(sipName_SetLink), meth_FbxCluster_SetLink, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetLink)},
    {SIP_MLNAME_CAST(sipName_SetLinkMode), meth_FbxCluster_SetLinkMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetLinkMode)},
    {SIP_MLNAME_CAST(sipName_SetTransformAssociateModelMatrix), meth_FbxCluster_SetTransformAssociateModelMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetTransformAssociateModelMatrix)},
    {SIP_MLNAME_CAST(sipName_SetTransformLinkMatrix), meth_FbxCluster_SetTransformLinkMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetTransformLinkMatrix)},
    {SIP_MLNAME_CAST(sipName_SetTransformMatrix), meth_FbxCluster_SetTransformMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetTransformMatrix)},
    {SIP_MLNAME_CAST(sipName_SetTransformParentMatrix), meth_FbxCluster_SetTransformParentMatrix, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxCluster_SetTransformParentMatrix)}
};

static sipEnumMemberDef enummembers_FbxCluster[] = {
    {sipName_eAdditive, static_cast<int>( ::FbxCluster::eAdditive), 99},
    {sipName_eNormalize, static_cast<int>( ::FbxCluster::eNormalize), 99},
    {sipName_eTotalOne, static_cast<int>( ::FbxCluster::eTotalOne), 99},
};


extern "C" {static PyObject *varget_FbxCluster_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxCluster_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxCluster::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxCluster_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxCluster_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxCluster::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxCluster[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxCluster_ClassId, (PyMethodDef *)varset_FbxCluster_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxCluster = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxCluster,
        {0},
        0
    },
    {
        sipNameNr_FbxCluster,
        {0, 0, 1},
        24, methods_FbxCluster,
        3, enummembers_FbxCluster,
        1, variables_FbxCluster,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxCluster,
    slots_FbxCluster,
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
    release_FbxCluster,
    cast_FbxCluster,
    0,
    0,
    0,
    0,
    0,
    0
};
