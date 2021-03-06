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




class sipFbxLayerElement : public  ::FbxLayerElement
{
public:
    sipFbxLayerElement();
    sipFbxLayerElement(const  ::FbxLayerElement&);
    ~sipFbxLayerElement();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxLayerElement(const sipFbxLayerElement &);
    sipFbxLayerElement &operator = (const sipFbxLayerElement &);
};

sipFbxLayerElement::sipFbxLayerElement():  ::FbxLayerElement(), sipPySelf(0)
{
}

sipFbxLayerElement::sipFbxLayerElement(const  ::FbxLayerElement& a0):  ::FbxLayerElement(a0), sipPySelf(0)
{
}

sipFbxLayerElement::~sipFbxLayerElement()
{
    sipInstanceDestroyed(sipPySelf);
}


PyDoc_STRVAR(doc_FbxLayerElement_sTypeTextureStartIndex, "sTypeTextureStartIndex() -> int");

extern "C" {static PyObject *meth_FbxLayerElement_sTypeTextureStartIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTypeTextureStartIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes = 0;

#line 102 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = FbxLayerElement::sTypeTextureStartIndex;
#line 88 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTypeTextureStartIndex, doc_FbxLayerElement_sTypeTextureStartIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTypeTextureEndIndex, "sTypeTextureEndIndex() -> int");

extern "C" {static PyObject *meth_FbxLayerElement_sTypeTextureEndIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTypeTextureEndIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes = 0;

#line 107 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = FbxLayerElement::sTypeTextureEndIndex;
#line 116 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTypeTextureEndIndex, doc_FbxLayerElement_sTypeTextureEndIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTypeTextureCount, "sTypeTextureCount() -> int");

extern "C" {static PyObject *meth_FbxLayerElement_sTypeTextureCount(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTypeTextureCount(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes = 0;

#line 112 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = FbxLayerElement::sTypeTextureCount;
#line 144 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTypeTextureCount, doc_FbxLayerElement_sTypeTextureCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTypeNonTextureStartIndex, "sTypeNonTextureStartIndex() -> int");

extern "C" {static PyObject *meth_FbxLayerElement_sTypeNonTextureStartIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTypeNonTextureStartIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes = 0;

#line 117 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = FbxLayerElement::sTypeNonTextureStartIndex;
#line 172 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTypeNonTextureStartIndex, doc_FbxLayerElement_sTypeNonTextureStartIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTypeNonTextureEndIndex, "sTypeNonTextureEndIndex() -> int");

extern "C" {static PyObject *meth_FbxLayerElement_sTypeNonTextureEndIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTypeNonTextureEndIndex(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes = 0;

#line 122 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = FbxLayerElement::sTypeNonTextureEndIndex;
#line 200 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTypeNonTextureEndIndex, doc_FbxLayerElement_sTypeNonTextureEndIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTypeNonTextureCount, "sTypeNonTextureCount() -> int");

extern "C" {static PyObject *meth_FbxLayerElement_sTypeNonTextureCount(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTypeNonTextureCount(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes = 0;

#line 127 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = FbxLayerElement::sTypeNonTextureCount;
#line 228 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTypeNonTextureCount, doc_FbxLayerElement_sTypeNonTextureCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTextureNames, "sTextureNames(int) -> str");

extern "C" {static PyObject *meth_FbxLayerElement_sTextureNames(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTextureNames(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes = 0;

#line 140 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = const_cast<const char *>(FbxLayerElement::sTextureNames[a0]);
#line 258 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTextureNames, doc_FbxLayerElement_sTextureNames);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTextureUVNames, "sTextureUVNames(int) -> str");

extern "C" {static PyObject *meth_FbxLayerElement_sTextureUVNames(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTextureUVNames(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes = 0;

#line 145 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = const_cast<const char *>(FbxLayerElement::sTextureUVNames[a0]);
#line 298 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTextureUVNames, doc_FbxLayerElement_sTextureUVNames);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sNonTextureNames, "sNonTextureNames(int) -> str");

extern "C" {static PyObject *meth_FbxLayerElement_sNonTextureNames(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sNonTextureNames(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes = 0;

#line 150 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = const_cast<const char *>(FbxLayerElement::sNonTextureNames[a0]);
#line 338 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sNonTextureNames, doc_FbxLayerElement_sNonTextureNames);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTextureDataTypes, "sTextureDataTypes(int) -> FbxDataType");

extern "C" {static PyObject *meth_FbxLayerElement_sTextureDataTypes(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTextureDataTypes(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const  ::FbxDataType*sipRes = 0;

#line 155 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = &(FbxLayerElement::sTextureDataTypes[a0]);
#line 378 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            return sipConvertFromType(const_cast< ::FbxDataType *>(sipRes),sipType_FbxDataType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTextureDataTypes, doc_FbxLayerElement_sTextureDataTypes);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_sTextureChannelNames, "sTextureChannelNames(int) -> str");

extern "C" {static PyObject *meth_FbxLayerElement_sTextureChannelNames(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_sTextureChannelNames(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            const char*sipRes = 0;

#line 160 "/var/www/html/lib/fbxpy/sip/fbxlayerelement.sip"
    sipRes = const_cast<const char *>(FbxLayerElement::sTextureChannelNames[a0]);
#line 408 "/var/www/html/lib/fbxpy/build/Python27_ucs4_x64/sipfbxFbxLayerElement.cpp"

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_sTextureChannelNames, doc_FbxLayerElement_sTextureChannelNames);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_SetMappingMode, "SetMappingMode(self, FbxLayerElement.EMappingMode)");

extern "C" {static PyObject *meth_FbxLayerElement_SetMappingMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_SetMappingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElement::EMappingMode a0;
         ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElement, &sipCpp, sipType_FbxLayerElement_EMappingMode, &a0))
        {
            sipCpp->SetMappingMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_SetMappingMode, doc_FbxLayerElement_SetMappingMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_SetReferenceMode, "SetReferenceMode(self, FbxLayerElement.EReferenceMode)");

extern "C" {static PyObject *meth_FbxLayerElement_SetReferenceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_SetReferenceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElement::EReferenceMode a0;
         ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxLayerElement, &sipCpp, sipType_FbxLayerElement_EReferenceMode, &a0))
        {
            sipCpp->SetReferenceMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_SetReferenceMode, doc_FbxLayerElement_SetReferenceMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_GetMappingMode, "GetMappingMode(self) -> FbxLayerElement.EMappingMode");

extern "C" {static PyObject *meth_FbxLayerElement_GetMappingMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_GetMappingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElement, &sipCpp))
        {
             ::FbxLayerElement::EMappingMode sipRes;

            sipRes = sipCpp->GetMappingMode();

            return sipConvertFromEnum(sipRes,sipType_FbxLayerElement_EMappingMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_GetMappingMode, doc_FbxLayerElement_GetMappingMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_GetReferenceMode, "GetReferenceMode(self) -> FbxLayerElement.EReferenceMode");

extern "C" {static PyObject *meth_FbxLayerElement_GetReferenceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_GetReferenceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElement, &sipCpp))
        {
             ::FbxLayerElement::EReferenceMode sipRes;

            sipRes = sipCpp->GetReferenceMode();

            return sipConvertFromEnum(sipRes,sipType_FbxLayerElement_EReferenceMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_GetReferenceMode, doc_FbxLayerElement_GetReferenceMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_SetName, "SetName(self, str)");

extern "C" {static PyObject *meth_FbxLayerElement_SetName(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_SetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8", &sipSelf, sipType_FbxLayerElement, &sipCpp, &a0Keep, &a0))
        {
            sipCpp->SetName(a0);
            Py_DECREF(a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_SetName, doc_FbxLayerElement_SetName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_GetName, "GetName(self) -> str");

extern "C" {static PyObject *meth_FbxLayerElement_GetName(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_GetName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElement, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetName();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_GetName, doc_FbxLayerElement_GetName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxLayerElement_Destroy, "Destroy(self)");

extern "C" {static PyObject *meth_FbxLayerElement_Destroy(PyObject *, PyObject *);}
static PyObject *meth_FbxLayerElement_Destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxLayerElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxLayerElement, &sipCpp))
        {
            sipCpp->Destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxLayerElement, sipName_Destroy, doc_FbxLayerElement_Destroy);

    return NULL;
}


extern "C" {static PyObject *slot_FbxLayerElement___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElement___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElement *sipCpp = reinterpret_cast< ::FbxLayerElement *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElement));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElement* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayerElement, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxLayerElement::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxLayerElement, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxLayerElement___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxLayerElement___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxLayerElement *sipCpp = reinterpret_cast< ::FbxLayerElement *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxLayerElement));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxLayerElement* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxLayerElement, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxLayerElement::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxLayerElement, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxLayerElement(void *, int);}
static void release_FbxLayerElement(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxLayerElement *>(sipCppV);
}


extern "C" {static void dealloc_FbxLayerElement(sipSimpleWrapper *);}
static void dealloc_FbxLayerElement(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxLayerElement *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxLayerElement(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxLayerElement(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxLayerElement(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxLayerElement *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipFbxLayerElement();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxLayerElement* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxLayerElement, &a0))
        {
            sipCpp = new sipFbxLayerElement(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxLayerElement[] = {
    {(void *)slot_FbxLayerElement___ne__, ne_slot},
    {(void *)slot_FbxLayerElement___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxLayerElement[] = {
    {SIP_MLNAME_CAST(sipName_Destroy), meth_FbxLayerElement_Destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_Destroy)},
    {SIP_MLNAME_CAST(sipName_GetMappingMode), meth_FbxLayerElement_GetMappingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_GetMappingMode)},
    {SIP_MLNAME_CAST(sipName_GetName), meth_FbxLayerElement_GetName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_GetName)},
    {SIP_MLNAME_CAST(sipName_GetReferenceMode), meth_FbxLayerElement_GetReferenceMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_GetReferenceMode)},
    {SIP_MLNAME_CAST(sipName_SetMappingMode), meth_FbxLayerElement_SetMappingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_SetMappingMode)},
    {SIP_MLNAME_CAST(sipName_SetName), meth_FbxLayerElement_SetName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_SetName)},
    {SIP_MLNAME_CAST(sipName_SetReferenceMode), meth_FbxLayerElement_SetReferenceMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_SetReferenceMode)},
    {SIP_MLNAME_CAST(sipName_sNonTextureNames), meth_FbxLayerElement_sNonTextureNames, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sNonTextureNames)},
    {SIP_MLNAME_CAST(sipName_sTextureChannelNames), meth_FbxLayerElement_sTextureChannelNames, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTextureChannelNames)},
    {SIP_MLNAME_CAST(sipName_sTextureDataTypes), meth_FbxLayerElement_sTextureDataTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTextureDataTypes)},
    {SIP_MLNAME_CAST(sipName_sTextureNames), meth_FbxLayerElement_sTextureNames, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTextureNames)},
    {SIP_MLNAME_CAST(sipName_sTextureUVNames), meth_FbxLayerElement_sTextureUVNames, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTextureUVNames)},
    {SIP_MLNAME_CAST(sipName_sTypeNonTextureCount), meth_FbxLayerElement_sTypeNonTextureCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTypeNonTextureCount)},
    {SIP_MLNAME_CAST(sipName_sTypeNonTextureEndIndex), meth_FbxLayerElement_sTypeNonTextureEndIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTypeNonTextureEndIndex)},
    {SIP_MLNAME_CAST(sipName_sTypeNonTextureStartIndex), meth_FbxLayerElement_sTypeNonTextureStartIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTypeNonTextureStartIndex)},
    {SIP_MLNAME_CAST(sipName_sTypeTextureCount), meth_FbxLayerElement_sTypeTextureCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTypeTextureCount)},
    {SIP_MLNAME_CAST(sipName_sTypeTextureEndIndex), meth_FbxLayerElement_sTypeTextureEndIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTypeTextureEndIndex)},
    {SIP_MLNAME_CAST(sipName_sTypeTextureStartIndex), meth_FbxLayerElement_sTypeTextureStartIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxLayerElement_sTypeTextureStartIndex)}
};

static sipEnumMemberDef enummembers_FbxLayerElement[] = {
    {sipName_eAllSame, static_cast<int>( ::FbxLayerElement::eAllSame), 173},
    {sipName_eBiNormal, static_cast<int>( ::FbxLayerElement::eBiNormal), 175},
    {sipName_eByControlPoint, static_cast<int>( ::FbxLayerElement::eByControlPoint), 173},
    {sipName_eByEdge, static_cast<int>( ::FbxLayerElement::eByEdge), 173},
    {sipName_eByPolygon, static_cast<int>( ::FbxLayerElement::eByPolygon), 173},
    {sipName_eByPolygonVertex, static_cast<int>( ::FbxLayerElement::eByPolygonVertex), 173},
    {sipName_eDirect, static_cast<int>( ::FbxLayerElement::eDirect), 174},
    {sipName_eEdgeCrease, static_cast<int>( ::FbxLayerElement::eEdgeCrease), 175},
    {sipName_eHole, static_cast<int>( ::FbxLayerElement::eHole), 175},
    {sipName_eIndex, static_cast<int>( ::FbxLayerElement::eIndex), 174},
    {sipName_eIndexToDirect, static_cast<int>( ::FbxLayerElement::eIndexToDirect), 174},
    {sipName_eMaterial, static_cast<int>( ::FbxLayerElement::eMaterial), 175},
    {sipName_eNone, static_cast<int>( ::FbxLayerElement::eNone), 173},
    {sipName_eNormal, static_cast<int>( ::FbxLayerElement::eNormal), 175},
    {sipName_ePolygonGroup, static_cast<int>( ::FbxLayerElement::ePolygonGroup), 175},
    {sipName_eSmoothing, static_cast<int>( ::FbxLayerElement::eSmoothing), 175},
    {sipName_eTangent, static_cast<int>( ::FbxLayerElement::eTangent), 175},
    {sipName_eTextureAmbient, static_cast<int>( ::FbxLayerElement::eTextureAmbient), 175},
    {sipName_eTextureAmbientFactor, static_cast<int>( ::FbxLayerElement::eTextureAmbientFactor), 175},
    {sipName_eTextureBump, static_cast<int>( ::FbxLayerElement::eTextureBump), 175},
    {sipName_eTextureDiffuse, static_cast<int>( ::FbxLayerElement::eTextureDiffuse), 175},
    {sipName_eTextureDiffuseFactor, static_cast<int>( ::FbxLayerElement::eTextureDiffuseFactor), 175},
    {sipName_eTextureDisplacement, static_cast<int>( ::FbxLayerElement::eTextureDisplacement), 175},
    {sipName_eTextureDisplacementVector, static_cast<int>( ::FbxLayerElement::eTextureDisplacementVector), 175},
    {sipName_eTextureEmissive, static_cast<int>( ::FbxLayerElement::eTextureEmissive), 175},
    {sipName_eTextureEmissiveFactor, static_cast<int>( ::FbxLayerElement::eTextureEmissiveFactor), 175},
    {sipName_eTextureNormalMap, static_cast<int>( ::FbxLayerElement::eTextureNormalMap), 175},
    {sipName_eTextureReflection, static_cast<int>( ::FbxLayerElement::eTextureReflection), 175},
    {sipName_eTextureReflectionFactor, static_cast<int>( ::FbxLayerElement::eTextureReflectionFactor), 175},
    {sipName_eTextureShininess, static_cast<int>( ::FbxLayerElement::eTextureShininess), 175},
    {sipName_eTextureSpecular, static_cast<int>( ::FbxLayerElement::eTextureSpecular), 175},
    {sipName_eTextureSpecularFactor, static_cast<int>( ::FbxLayerElement::eTextureSpecularFactor), 175},
    {sipName_eTextureTransparency, static_cast<int>( ::FbxLayerElement::eTextureTransparency), 175},
    {sipName_eTextureTransparencyFactor, static_cast<int>( ::FbxLayerElement::eTextureTransparencyFactor), 175},
    {sipName_eTypeCount, static_cast<int>( ::FbxLayerElement::eTypeCount), 175},
    {sipName_eUV, static_cast<int>( ::FbxLayerElement::eUV), 175},
    {sipName_eUnknown, static_cast<int>( ::FbxLayerElement::eUnknown), 175},
    {sipName_eUserData, static_cast<int>( ::FbxLayerElement::eUserData), 175},
    {sipName_eVertexColor, static_cast<int>( ::FbxLayerElement::eVertexColor), 175},
    {sipName_eVertexCrease, static_cast<int>( ::FbxLayerElement::eVertexCrease), 175},
    {sipName_eVisibility, static_cast<int>( ::FbxLayerElement::eVisibility), 175},
};

PyDoc_STRVAR(doc_FbxLayerElement, "\1FbxLayerElement()\n"
    "FbxLayerElement(FbxLayerElement)");


sipClassTypeDef sipTypeDef_fbx_FbxLayerElement = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxLayerElement,
        {0},
        0
    },
    {
        sipNameNr_FbxLayerElement,
        {0, 0, 1},
        18, methods_FbxLayerElement,
        41, enummembers_FbxLayerElement,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxLayerElement,
    -1,
    -1,
    0,
    slots_FbxLayerElement,
    init_type_FbxLayerElement,
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
    dealloc_FbxLayerElement,
    0,
    0,
    0,
    release_FbxLayerElement,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
