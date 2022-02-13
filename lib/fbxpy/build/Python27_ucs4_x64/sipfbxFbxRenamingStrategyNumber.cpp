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




class sipFbxRenamingStrategyNumber : public  ::FbxRenamingStrategyNumber
{
public:
    sipFbxRenamingStrategyNumber();
    sipFbxRenamingStrategyNumber(const  ::FbxRenamingStrategyNumber&);
    virtual ~sipFbxRenamingStrategyNumber();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void Clear();
    bool Rename( ::FbxNameHandler&);
     ::FbxRenamingStrategyInterface* Clone();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxRenamingStrategyNumber(const sipFbxRenamingStrategyNumber &);
    sipFbxRenamingStrategyNumber &operator = (const sipFbxRenamingStrategyNumber &);

    char sipPyMethods[3];
};

sipFbxRenamingStrategyNumber::sipFbxRenamingStrategyNumber():  ::FbxRenamingStrategyNumber(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxRenamingStrategyNumber::sipFbxRenamingStrategyNumber(const  ::FbxRenamingStrategyNumber& a0):  ::FbxRenamingStrategyNumber(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxRenamingStrategyNumber::~sipFbxRenamingStrategyNumber()
{
    sipInstanceDestroyed(sipPySelf);
}

void sipFbxRenamingStrategyNumber::Clear()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_Clear);

    if (!sipMeth)
    {
         ::FbxRenamingStrategyNumber::Clear();
        return;
    }

    extern void sipVH_fbx_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_fbx_0(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipFbxRenamingStrategyNumber::Rename( ::FbxNameHandler& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_Rename);

    if (!sipMeth)
        return  ::FbxRenamingStrategyNumber::Rename(a0);

    extern bool sipVH_fbx_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxNameHandler&);

    return sipVH_fbx_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::FbxRenamingStrategyInterface* sipFbxRenamingStrategyNumber::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return  ::FbxRenamingStrategyNumber::Clone();

    extern  ::FbxRenamingStrategyInterface* sipVH_fbx_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_13(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxRenamingStrategyNumber_Clear, "Clear(self)");

extern "C" {static PyObject *meth_FbxRenamingStrategyNumber_Clear(PyObject *, PyObject *);}
static PyObject *meth_FbxRenamingStrategyNumber_Clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxRenamingStrategyNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxRenamingStrategyNumber, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxRenamingStrategyNumber::Clear() : sipCpp->Clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxRenamingStrategyNumber, sipName_Clear, doc_FbxRenamingStrategyNumber_Clear);

    return NULL;
}


PyDoc_STRVAR(doc_FbxRenamingStrategyNumber_Rename, "Rename(self, FbxNameHandler) -> bool");

extern "C" {static PyObject *meth_FbxRenamingStrategyNumber_Rename(PyObject *, PyObject *);}
static PyObject *meth_FbxRenamingStrategyNumber_Rename(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxNameHandler* a0;
         ::FbxRenamingStrategyNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxRenamingStrategyNumber, &sipCpp, sipType_FbxNameHandler, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxRenamingStrategyNumber::Rename(*a0) : sipCpp->Rename(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxRenamingStrategyNumber, sipName_Rename, doc_FbxRenamingStrategyNumber_Rename);

    return NULL;
}


PyDoc_STRVAR(doc_FbxRenamingStrategyNumber_Clone, "Clone(self) -> FbxRenamingStrategyInterface");

extern "C" {static PyObject *meth_FbxRenamingStrategyNumber_Clone(PyObject *, PyObject *);}
static PyObject *meth_FbxRenamingStrategyNumber_Clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxRenamingStrategyNumber *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxRenamingStrategyNumber, &sipCpp))
        {
             ::FbxRenamingStrategyInterface*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxRenamingStrategyNumber::Clone() : sipCpp->Clone());

            return sipConvertFromType(sipRes,sipType_FbxRenamingStrategyInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxRenamingStrategyNumber, sipName_Clone, doc_FbxRenamingStrategyNumber_Clone);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxRenamingStrategyNumber(void *, const sipTypeDef *);}
static void *cast_FbxRenamingStrategyNumber(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxRenamingStrategyNumber *sipCpp = reinterpret_cast< ::FbxRenamingStrategyNumber *>(sipCppV);

    if (targetType == sipType_FbxRenamingStrategyInterface)
        return static_cast< ::FbxRenamingStrategyInterface *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxRenamingStrategyNumber(void *, int);}
static void release_FbxRenamingStrategyNumber(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxRenamingStrategyNumber *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxRenamingStrategyNumber *>(sipCppV);
}


extern "C" {static void assign_FbxRenamingStrategyNumber(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxRenamingStrategyNumber(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxRenamingStrategyNumber *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxRenamingStrategyNumber *>(sipSrc);
}


extern "C" {static void *array_FbxRenamingStrategyNumber(SIP_SSIZE_T);}
static void *array_FbxRenamingStrategyNumber(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxRenamingStrategyNumber[sipNrElem];
}


extern "C" {static void *copy_FbxRenamingStrategyNumber(const void *, SIP_SSIZE_T);}
static void *copy_FbxRenamingStrategyNumber(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxRenamingStrategyNumber(reinterpret_cast<const  ::FbxRenamingStrategyNumber *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxRenamingStrategyNumber(sipSimpleWrapper *);}
static void dealloc_FbxRenamingStrategyNumber(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxRenamingStrategyNumber *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxRenamingStrategyNumber(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxRenamingStrategyNumber(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxRenamingStrategyNumber(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxRenamingStrategyNumber *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipFbxRenamingStrategyNumber();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxRenamingStrategyNumber* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxRenamingStrategyNumber, &a0))
        {
            sipCpp = new sipFbxRenamingStrategyNumber(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxRenamingStrategyNumber[] = {{325, 255, 1}};


static PyMethodDef methods_FbxRenamingStrategyNumber[] = {
    {SIP_MLNAME_CAST(sipName_Clear), meth_FbxRenamingStrategyNumber_Clear, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxRenamingStrategyNumber_Clear)},
    {SIP_MLNAME_CAST(sipName_Clone), meth_FbxRenamingStrategyNumber_Clone, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxRenamingStrategyNumber_Clone)},
    {SIP_MLNAME_CAST(sipName_Rename), meth_FbxRenamingStrategyNumber_Rename, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxRenamingStrategyNumber_Rename)}
};

PyDoc_STRVAR(doc_FbxRenamingStrategyNumber, "\1FbxRenamingStrategyNumber()\n"
    "FbxRenamingStrategyNumber(FbxRenamingStrategyNumber)");


sipClassTypeDef sipTypeDef_fbx_FbxRenamingStrategyNumber = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxRenamingStrategyNumber,
        {0},
        0
    },
    {
        sipNameNr_FbxRenamingStrategyNumber,
        {0, 0, 1},
        3, methods_FbxRenamingStrategyNumber,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxRenamingStrategyNumber,
    -1,
    -1,
    supers_FbxRenamingStrategyNumber,
    0,
    init_type_FbxRenamingStrategyNumber,
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
    dealloc_FbxRenamingStrategyNumber,
    assign_FbxRenamingStrategyNumber,
    array_FbxRenamingStrategyNumber,
    copy_FbxRenamingStrategyNumber,
    release_FbxRenamingStrategyNumber,
    cast_FbxRenamingStrategyNumber,
    0,
    0,
    0,
    0,
    0,
    0
};
