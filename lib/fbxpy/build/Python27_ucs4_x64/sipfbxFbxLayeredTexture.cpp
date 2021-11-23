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




PyDoc_STRVAR(doc_FbxLayeredTexture_Create, "Create(FbxManager, str) -> FbxLayeredTexture\n"
    "Create(FbxObject, str) -> FbxLayeredTexture");

extern "C" {static PyObject *meth_FbxLayeredTexture_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxLayeredTexture_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxLayeredTexture*sipRes;

            sipRes =  ::FbxLayeredTexture::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxLayeredTexture,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxLayeredTexture*sipRes;

            sipRes =  ::FbxLayeredTexture::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxLayeredTexture,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayeredTexture, sipName_Create, doc_FbxLayeredTexture_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayeredTexture_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxLayeredTexture_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxLayeredTexture_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxLayeredTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayeredTexture, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxLayeredTexture::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayeredTexture, sipName_GetClassId, doc_FbxLayeredTexture_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayeredTexture_SetTextureBlendMode, "SetTextureBlendMode(self, int, FbxLayeredTexture.EBlendMode) -> bool");

extern "C" {static PyObject *meth_FbxLayeredTexture_SetTextureBlendMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayeredTexture_SetTextureBlendMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxLayeredTexture::EBlendMode a1;
         ::FbxLayeredTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiE", &sipSelf, sipType_FbxLayeredTexture, &sipCpp, &a0, sipType_FbxLayeredTexture_EBlendMode, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetTextureBlendMode(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayeredTexture, sipName_SetTextureBlendMode, doc_FbxLayeredTexture_SetTextureBlendMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayeredTexture_GetTextureBlendMode, "GetTextureBlendMode(self, int) -> Tuple[bool, FbxLayeredTexture.EBlendMode]");

extern "C" {static PyObject *meth_FbxLayeredTexture_GetTextureBlendMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayeredTexture_GetTextureBlendMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxLayeredTexture::EBlendMode a1;
        const  ::FbxLayeredTexture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxLayeredTexture, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetTextureBlendMode(a0,a1);

            return sipBuildResult(0,"(bF)",sipRes,a1,sipType_FbxLayeredTexture_EBlendMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayeredTexture, sipName_GetTextureBlendMode, doc_FbxLayeredTexture_GetTextureBlendMode);

    return NULL;
}


extern "C" {static PyObject *slot_FbxLayeredTexture___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayeredTexture___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayeredTexture *sipCpp = reinterpret_cast< ::FbxLayeredTexture *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayeredTexture));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayeredTexture* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayeredTexture, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxLayeredTexture::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxLayeredTexture, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxLayeredTexture___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayeredTexture___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayeredTexture *sipCpp = reinterpret_cast< ::FbxLayeredTexture *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayeredTexture));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayeredTexture* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayeredTexture, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxLayeredTexture::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxLayeredTexture, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxLayeredTexture(void *, const sipTypeDef *);}
static void *cast_FbxLayeredTexture(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxLayeredTexture *sipCpp = reinterpret_cast< ::FbxLayeredTexture *>(sipCppV);

    if (targetType == sipType_FbxTexture)
        return static_cast< ::FbxTexture *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayeredTexture(void *, int);}
static void release_FbxLayeredTexture(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxLayeredTexture[] = {{358, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLayeredTexture[] = {
    {(void *)slot_FbxLayeredTexture___ne__, ne_slot},
    {(void *)slot_FbxLayeredTexture___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLayeredTexture[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxLayeredTexture_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayeredTexture_Create)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxLayeredTexture_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayeredTexture_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetTextureBlendMode), meth_FbxLayeredTexture_GetTextureBlendMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayeredTexture_GetTextureBlendMode)},
    {SIP_MLNAME_CAST(sipName_SetTextureBlendMode), meth_FbxLayeredTexture_SetTextureBlendMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayeredTexture_SetTextureBlendMode)}
};

static sipEnumMemberDef enummembers_FbxLayeredTexture[] = {
    {sipName_eAdditive, static_cast<int>( ::FbxLayeredTexture::eAdditive), 208},
    {sipName_eBlendModeCount, static_cast<int>( ::FbxLayeredTexture::eBlendModeCount), 208},
    {sipName_eColor, static_cast<int>( ::FbxLayeredTexture::eColor), 208},
    {sipName_eColorBurn, static_cast<int>( ::FbxLayeredTexture::eColorBurn), 208},
    {sipName_eColorDodge, static_cast<int>( ::FbxLayeredTexture::eColorDodge), 208},
    {sipName_eDarken, static_cast<int>( ::FbxLayeredTexture::eDarken), 208},
    {sipName_eDarkerColor, static_cast<int>( ::FbxLayeredTexture::eDarkerColor), 208},
    {sipName_eDifference, static_cast<int>( ::FbxLayeredTexture::eDifference), 208},
    {sipName_eDissolve, static_cast<int>( ::FbxLayeredTexture::eDissolve), 208},
    {sipName_eDivide, static_cast<int>( ::FbxLayeredTexture::eDivide), 208},
    {sipName_eExclusion, static_cast<int>( ::FbxLayeredTexture::eExclusion), 208},
    {sipName_eHardLight, static_cast<int>( ::FbxLayeredTexture::eHardLight), 208},
    {sipName_eHardMix, static_cast<int>( ::FbxLayeredTexture::eHardMix), 208},
    {sipName_eHue, static_cast<int>( ::FbxLayeredTexture::eHue), 208},
    {sipName_eLighten, static_cast<int>( ::FbxLayeredTexture::eLighten), 208},
    {sipName_eLighterColor, static_cast<int>( ::FbxLayeredTexture::eLighterColor), 208},
    {sipName_eLinearBurn, static_cast<int>( ::FbxLayeredTexture::eLinearBurn), 208},
    {sipName_eLinearDodge, static_cast<int>( ::FbxLayeredTexture::eLinearDodge), 208},
    {sipName_eLinearLight, static_cast<int>( ::FbxLayeredTexture::eLinearLight), 208},
    {sipName_eLuminosity, static_cast<int>( ::FbxLayeredTexture::eLuminosity), 208},
    {sipName_eModulate, static_cast<int>( ::FbxLayeredTexture::eModulate), 208},
    {sipName_eModulate2, static_cast<int>( ::FbxLayeredTexture::eModulate2), 208},
    {sipName_eNormal, static_cast<int>( ::FbxLayeredTexture::eNormal), 208},
    {sipName_eOver, static_cast<int>( ::FbxLayeredTexture::eOver), 208},
    {sipName_eOverlay, static_cast<int>( ::FbxLayeredTexture::eOverlay), 208},
    {sipName_ePinLight, static_cast<int>( ::FbxLayeredTexture::ePinLight), 208},
    {sipName_eSaturation, static_cast<int>( ::FbxLayeredTexture::eSaturation), 208},
    {sipName_eScreen, static_cast<int>( ::FbxLayeredTexture::eScreen), 208},
    {sipName_eSoftLight, static_cast<int>( ::FbxLayeredTexture::eSoftLight), 208},
    {sipName_eSubtract, static_cast<int>( ::FbxLayeredTexture::eSubtract), 208},
    {sipName_eTranslucent, static_cast<int>( ::FbxLayeredTexture::eTranslucent), 208},
    {sipName_eVividLight, static_cast<int>( ::FbxLayeredTexture::eVividLight), 208},
};


extern "C" {static PyObject *varget_FbxLayeredTexture_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxLayeredTexture_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxLayeredTexture::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxLayeredTexture_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxLayeredTexture_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxLayeredTexture::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxLayeredTexture[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxLayeredTexture_ClassId, (PyMethodDef *)varset_FbxLayeredTexture_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxLayeredTexture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxLayeredTexture,
        {0},
        0
    },
    {
        sipNameNr_FbxLayeredTexture,
        {0, 0, 1},
        4, methods_FbxLayeredTexture,
        32, enummembers_FbxLayeredTexture,
        1, variables_FbxLayeredTexture,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxLayeredTexture,
    slots_FbxLayeredTexture,
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
    release_FbxLayeredTexture,
    cast_FbxLayeredTexture,
    0,
    0,
    0,
    0,
    0,
    0
};
