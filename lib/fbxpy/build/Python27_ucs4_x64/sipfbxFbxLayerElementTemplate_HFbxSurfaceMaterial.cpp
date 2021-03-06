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




class sipFbxLayerElementTemplate_HFbxSurfaceMaterial : public  ::FbxLayerElementTemplate_HFbxSurfaceMaterial
{
public:
    sipFbxLayerElementTemplate_HFbxSurfaceMaterial();
    sipFbxLayerElementTemplate_HFbxSurfaceMaterial(const  ::FbxLayerElementTemplate_HFbxSurfaceMaterial&);
    ~sipFbxLayerElementTemplate_HFbxSurfaceMaterial();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxLayerElementTemplate_HFbxSurfaceMaterial(const sipFbxLayerElementTemplate_HFbxSurfaceMaterial &);
    sipFbxLayerElementTemplate_HFbxSurfaceMaterial &operator = (const sipFbxLayerElementTemplate_HFbxSurfaceMaterial &);
};

sipFbxLayerElementTemplate_HFbxSurfaceMaterial::sipFbxLayerElementTemplate_HFbxSurfaceMaterial():  ::FbxLayerElementTemplate_HFbxSurfaceMaterial(), sipPySelf(0)
{
}

sipFbxLayerElementTemplate_HFbxSurfaceMaterial::sipFbxLayerElementTemplate_HFbxSurfaceMaterial(const  ::FbxLayerElementTemplate_HFbxSurfaceMaterial& a0):  ::FbxLayerElementTemplate_HFbxSurfaceMaterial(a0), sipPySelf(0)
{
}

sipFbxLayerElementTemplate_HFbxSurfaceMaterial::~sipFbxLayerElementTemplate_HFbxSurfaceMaterial()
{
    sipInstanceDestroyed(sipPySelf);
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetDirectArray, "GetDirectArray(self) -> FbxLayerElementArrayTemplate_HFbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetDirectArray(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetDirectArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &sipCpp))
        {
             ::FbxLayerElementArrayTemplate_HFbxSurfaceMaterial*sipRes;

            sipRes = &sipCpp->GetDirectArray();

            return sipConvertFromType(sipRes,sipType_FbxLayerElementArrayTemplate_HFbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_HFbxSurfaceMaterial, sipName_GetDirectArray, doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetDirectArray);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetIndexArray, "GetIndexArray(self) -> FbxLayerElementArrayTemplate_int");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetIndexArray(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetIndexArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &sipCpp))
        {
             ::FbxLayerElementArrayTemplate_int*sipRes;

            sipRes = &sipCpp->GetIndexArray();

            return sipConvertFromType(sipRes,sipType_FbxLayerElementArrayTemplate_int,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_HFbxSurfaceMaterial, sipName_GetIndexArray, doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetIndexArray);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_Clear, "Clear(self) -> bool");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->Clear();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_HFbxSurfaceMaterial, sipName_Clear, doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_Clear);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_RemapIndexTo, "RemapIndexTo(self, FbxLayerElement.EMappingMode) -> int");

extern "C" {static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_RemapIndexTo(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_RemapIndexTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElement::EMappingMode a0;
         ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &sipCpp, sipType_FbxLayerElement_EMappingMode, &a0))
        {
            int sipRes;

            sipRes = sipCpp->RemapIndexTo(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElementTemplate_HFbxSurfaceMaterial, sipName_RemapIndexTo, doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_RemapIndexTo);

    return NULL;
}


extern "C" {static PyObject *slot_FbxLayerElementTemplate_HFbxSurfaceMaterial___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElementTemplate_HFbxSurfaceMaterial___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElementTemplate_HFbxSurfaceMaterial* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxLayerElementTemplate_HFbxSurfaceMaterial::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxLayerElementTemplate_HFbxSurfaceMaterial___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElementTemplate_HFbxSurfaceMaterial___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElementTemplate_HFbxSurfaceMaterial* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxLayerElementTemplate_HFbxSurfaceMaterial::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLayerElementTemplate_HFbxSurfaceMaterial(void *, const sipTypeDef *);}
static void *cast_FbxLayerElementTemplate_HFbxSurfaceMaterial(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipCppV);

    if (targetType == sipType_FbxLayerElement)
        return static_cast< ::FbxLayerElement *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElementTemplate_HFbxSurfaceMaterial(void *, int);}
static void release_FbxLayerElementTemplate_HFbxSurfaceMaterial(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipCppV);
}


extern "C" {static void dealloc_FbxLayerElementTemplate_HFbxSurfaceMaterial(sipSimpleWrapper *);}
static void dealloc_FbxLayerElementTemplate_HFbxSurfaceMaterial(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElementTemplate_HFbxSurfaceMaterial(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElementTemplate_HFbxSurfaceMaterial(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElementTemplate_HFbxSurfaceMaterial(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipFbxLayerElementTemplate_HFbxSurfaceMaterial();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElementTemplate_HFbxSurfaceMaterial* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxLayerElementTemplate_HFbxSurfaceMaterial, &a0))
        {
            sipCpp = new sipFbxLayerElementTemplate_HFbxSurfaceMaterial(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLayerElementTemplate_HFbxSurfaceMaterial[] = {{172, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLayerElementTemplate_HFbxSurfaceMaterial[] = {
    {(void *)slot_FbxLayerElementTemplate_HFbxSurfaceMaterial___ne__, ne_slot},
    {(void *)slot_FbxLayerElementTemplate_HFbxSurfaceMaterial___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLayerElementTemplate_HFbxSurfaceMaterial[] = {
    {SIP_MLNAME_CAST(sipName_Clear), meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_Clear, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_Clear)},
    {SIP_MLNAME_CAST(sipName_GetDirectArray), meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetDirectArray, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetDirectArray)},
    {SIP_MLNAME_CAST(sipName_GetIndexArray), meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetIndexArray, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_GetIndexArray)},
    {SIP_MLNAME_CAST(sipName_RemapIndexTo), meth_FbxLayerElementTemplate_HFbxSurfaceMaterial_RemapIndexTo, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial_RemapIndexTo)}
};


extern "C" {static PyObject *varget_FbxLayerElementTemplate_HFbxSurfaceMaterial_mDirectArray(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLayerElementTemplate_HFbxSurfaceMaterial_mDirectArray(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxLayerElementArrayTemplate_HFbxSurfaceMaterial*sipVal;
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipSelf);

    sipVal = sipCpp->mDirectArray;

    return sipConvertFromType(sipVal, sipType_FbxLayerElementArrayTemplate_HFbxSurfaceMaterial, NULL);
}


extern "C" {static int varset_FbxLayerElementTemplate_HFbxSurfaceMaterial_mDirectArray(void *, PyObject *, PyObject *);}
static int varset_FbxLayerElementTemplate_HFbxSurfaceMaterial_mDirectArray(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxLayerElementArrayTemplate_HFbxSurfaceMaterial*sipVal;
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxLayerElementArrayTemplate_HFbxSurfaceMaterial *>(sipForceConvertToType(sipPy,sipType_FbxLayerElementArrayTemplate_HFbxSurfaceMaterial,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mDirectArray = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxLayerElementTemplate_HFbxSurfaceMaterial_mIndexArray(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLayerElementTemplate_HFbxSurfaceMaterial_mIndexArray(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxLayerElementArrayTemplate_int*sipVal;
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipSelf);

    sipVal = sipCpp->mIndexArray;

    return sipConvertFromType(sipVal, sipType_FbxLayerElementArrayTemplate_int, NULL);
}


extern "C" {static int varset_FbxLayerElementTemplate_HFbxSurfaceMaterial_mIndexArray(void *, PyObject *, PyObject *);}
static int varset_FbxLayerElementTemplate_HFbxSurfaceMaterial_mIndexArray(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxLayerElementArrayTemplate_int*sipVal;
     ::FbxLayerElementTemplate_HFbxSurfaceMaterial *sipCpp = reinterpret_cast< ::FbxLayerElementTemplate_HFbxSurfaceMaterial *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxLayerElementArrayTemplate_int *>(sipForceConvertToType(sipPy,sipType_FbxLayerElementArrayTemplate_int,NULL,0,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mIndexArray = sipVal;

    return 0;
}

sipVariableDef variables_FbxLayerElementTemplate_HFbxSurfaceMaterial[] = {
    {InstanceVariable, sipName_mDirectArray, (PyMethodDef *)varget_FbxLayerElementTemplate_HFbxSurfaceMaterial_mDirectArray, (PyMethodDef *)varset_FbxLayerElementTemplate_HFbxSurfaceMaterial_mDirectArray, NULL, NULL},
    {InstanceVariable, sipName_mIndexArray, (PyMethodDef *)varget_FbxLayerElementTemplate_HFbxSurfaceMaterial_mIndexArray, (PyMethodDef *)varset_FbxLayerElementTemplate_HFbxSurfaceMaterial_mIndexArray, NULL, NULL},
};

PyDoc_STRVAR(doc_FbxLayerElementTemplate_HFbxSurfaceMaterial, "\1FbxLayerElementTemplate_HFbxSurfaceMaterial()\n"
    "FbxLayerElementTemplate_HFbxSurfaceMaterial(FbxLayerElementTemplate_HFbxSurfaceMaterial)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElementTemplate_HFbxSurfaceMaterial = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElementTemplate_HFbxSurfaceMaterial,
        {0},
        0
    },
    {
        sipNameNr_FbxLayerElementTemplate_HFbxSurfaceMaterial,
        {0, 0, 1},
        4, methods_FbxLayerElementTemplate_HFbxSurfaceMaterial,
        0, 0,
        2, variables_FbxLayerElementTemplate_HFbxSurfaceMaterial,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxLayerElementTemplate_HFbxSurfaceMaterial,
    -1,
    -1,
    supers_FbxLayerElementTemplate_HFbxSurfaceMaterial,
    slots_FbxLayerElementTemplate_HFbxSurfaceMaterial,
    init_type_FbxLayerElementTemplate_HFbxSurfaceMaterial,
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
    dealloc_FbxLayerElementTemplate_HFbxSurfaceMaterial,
    0,
    0,
    0,
    release_FbxLayerElementTemplate_HFbxSurfaceMaterial,
    cast_FbxLayerElementTemplate_HFbxSurfaceMaterial,
    0,
    0,
    0,
    0,
    0,
    0
};
