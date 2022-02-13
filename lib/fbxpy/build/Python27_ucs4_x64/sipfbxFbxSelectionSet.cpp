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




PyDoc_STRVAR(doc_FbxSelectionSet_Create, "Create(FbxManager, str) -> FbxSelectionSet\n"
    "Create(FbxObject, str) -> FbxSelectionSet");

extern "C" {static PyObject *meth_FbxSelectionSet_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionSet_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxSelectionSet*sipRes;

            sipRes =  ::FbxSelectionSet::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSelectionSet,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxSelectionSet*sipRes;

            sipRes =  ::FbxSelectionSet::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxSelectionSet,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSelectionSet, sipName_Create, doc_FbxSelectionSet_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSelectionSet_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxSelectionSet_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionSet_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxSelectionSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSelectionSet, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxSelectionSet::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSelectionSet, sipName_GetClassId, doc_FbxSelectionSet_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSelectionSet_GetFaceSelection, "GetFaceSelection(self, FbxObject, IntArray)");

extern "C" {static PyObject *meth_FbxSelectionSet_GetFaceSelection(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionSet_GetFaceSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
         ::IntArray* a1;
         ::FbxSelectionSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_FbxSelectionSet, &sipCpp, sipType_FbxObject, &a0, sipType_IntArray, &a1))
        {
            sipCpp->GetFaceSelection(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSelectionSet, sipName_GetFaceSelection, doc_FbxSelectionSet_GetFaceSelection);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSelectionSet_GetEdgeSelection, "GetEdgeSelection(self, FbxObject, IntArray)");

extern "C" {static PyObject *meth_FbxSelectionSet_GetEdgeSelection(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionSet_GetEdgeSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
         ::IntArray* a1;
         ::FbxSelectionSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_FbxSelectionSet, &sipCpp, sipType_FbxObject, &a0, sipType_IntArray, &a1))
        {
            sipCpp->GetEdgeSelection(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSelectionSet, sipName_GetEdgeSelection, doc_FbxSelectionSet_GetEdgeSelection);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSelectionSet_GetVertexSelection, "GetVertexSelection(self, FbxObject, IntArray)");

extern "C" {static PyObject *meth_FbxSelectionSet_GetVertexSelection(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionSet_GetVertexSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxObject* a0;
         ::IntArray* a1;
         ::FbxSelectionSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9", &sipSelf, sipType_FbxSelectionSet, &sipCpp, sipType_FbxObject, &a0, sipType_IntArray, &a1))
        {
            sipCpp->GetVertexSelection(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSelectionSet, sipName_GetVertexSelection, doc_FbxSelectionSet_GetVertexSelection);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSelectionSet_GetSelectionNodesAndDirectObjects, "GetSelectionNodesAndDirectObjects(self, FbxSelectionNodeArray, FbxObjectArray)");

extern "C" {static PyObject *meth_FbxSelectionSet_GetSelectionNodesAndDirectObjects(PyObject *, PyObject *);}
static PyObject *meth_FbxSelectionSet_GetSelectionNodesAndDirectObjects(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSelectionNodeArray* a0;
         ::FbxObjectArray* a1;
         ::FbxSelectionSet *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_FbxSelectionSet, &sipCpp, sipType_FbxSelectionNodeArray, &a0, sipType_FbxObjectArray, &a1))
        {
            sipCpp->GetSelectionNodesAndDirectObjects(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSelectionSet, sipName_GetSelectionNodesAndDirectObjects, doc_FbxSelectionSet_GetSelectionNodesAndDirectObjects);

    return NULL;
}


extern "C" {static PyObject *slot_FbxSelectionSet___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxSelectionSet___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSelectionSet *sipCpp = reinterpret_cast< ::FbxSelectionSet *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSelectionSet));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSelectionSet* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSelectionSet, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxSelectionSet::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxSelectionSet, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxSelectionSet___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxSelectionSet___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSelectionSet *sipCpp = reinterpret_cast< ::FbxSelectionSet *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSelectionSet));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSelectionSet* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxSelectionSet, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxSelectionSet::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxSelectionSet, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxSelectionSet(void *, const sipTypeDef *);}
static void *cast_FbxSelectionSet(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxSelectionSet *sipCpp = reinterpret_cast< ::FbxSelectionSet *>(sipCppV);

    if (targetType == sipType_FbxCollection)
        return static_cast< ::FbxCollection *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSelectionSet(void *, int);}
static void release_FbxSelectionSet(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxSelectionSet[] = {{100, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSelectionSet[] = {
    {(void *)slot_FbxSelectionSet___ne__, ne_slot},
    {(void *)slot_FbxSelectionSet___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSelectionSet[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxSelectionSet_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSelectionSet_Create)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxSelectionSet_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSelectionSet_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetEdgeSelection), meth_FbxSelectionSet_GetEdgeSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSelectionSet_GetEdgeSelection)},
    {SIP_MLNAME_CAST(sipName_GetFaceSelection), meth_FbxSelectionSet_GetFaceSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSelectionSet_GetFaceSelection)},
    {SIP_MLNAME_CAST(sipName_GetSelectionNodesAndDirectObjects), meth_FbxSelectionSet_GetSelectionNodesAndDirectObjects, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSelectionSet_GetSelectionNodesAndDirectObjects)},
    {SIP_MLNAME_CAST(sipName_GetVertexSelection), meth_FbxSelectionSet_GetVertexSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSelectionSet_GetVertexSelection)}
};


extern "C" {static PyObject *varget_FbxSelectionSet_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionSet_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxSelectionSet::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxSelectionSet_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionSet_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxSelectionSet::ClassId = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxSelectionSet_SelectionSetAnnotation(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxSelectionSet_SelectionSetAnnotation(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxPropertyString*sipVal;
     ::FbxSelectionSet *sipCpp = reinterpret_cast< ::FbxSelectionSet *>(sipSelf);

    sipVal = &sipCpp->SelectionSetAnnotation;

    return sipConvertFromType(sipVal, sipType_FbxPropertyString, NULL);
}


extern "C" {static int varset_FbxSelectionSet_SelectionSetAnnotation(void *, PyObject *, PyObject *);}
static int varset_FbxSelectionSet_SelectionSetAnnotation(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxPropertyString*sipVal;
     ::FbxSelectionSet *sipCpp = reinterpret_cast< ::FbxSelectionSet *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxPropertyString *>(sipForceConvertToType(sipPy,sipType_FbxPropertyString,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->SelectionSetAnnotation = *sipVal;

    return 0;
}

sipVariableDef variables_FbxSelectionSet[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxSelectionSet_ClassId, (PyMethodDef *)varset_FbxSelectionSet_ClassId, NULL, NULL},
    {InstanceVariable, sipName_SelectionSetAnnotation, (PyMethodDef *)varget_FbxSelectionSet_SelectionSetAnnotation, (PyMethodDef *)varset_FbxSelectionSet_SelectionSetAnnotation, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxSelectionSet = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxSelectionSet,
        {0},
        0
    },
    {
        sipNameNr_FbxSelectionSet,
        {0, 0, 1},
        6, methods_FbxSelectionSet,
        0, 0,
        2, variables_FbxSelectionSet,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxSelectionSet,
    slots_FbxSelectionSet,
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
    release_FbxSelectionSet,
    cast_FbxSelectionSet,
    0,
    0,
    0,
    0,
    0,
    0
};
