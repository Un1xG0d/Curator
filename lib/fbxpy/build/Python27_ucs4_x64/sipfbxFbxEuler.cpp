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




/* Call the instance's destructor. */
extern "C" {static void release_FbxEuler(void *, int);}
static void release_FbxEuler(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxEuler *>(sipCppV);
}


extern "C" {static void assign_FbxEuler(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxEuler(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxEuler *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxEuler *>(sipSrc);
}


extern "C" {static void *array_FbxEuler(SIP_SSIZE_T);}
static void *array_FbxEuler(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxEuler[sipNrElem];
}


extern "C" {static void *copy_FbxEuler(const void *, SIP_SSIZE_T);}
static void *copy_FbxEuler(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxEuler(reinterpret_cast<const  ::FbxEuler *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxEuler(sipSimpleWrapper *);}
static void dealloc_FbxEuler(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxEuler(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxEuler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxEuler(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxEuler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxEuler();

            return sipCpp;
        }
    }

    {
        const  ::FbxEuler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxEuler, &a0))
        {
            sipCpp = new  ::FbxEuler(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_FbxEuler[] = {
    {sipName_eAxisX, static_cast<int>( ::FbxEuler::eAxisX), 140},
    {sipName_eAxisY, static_cast<int>( ::FbxEuler::eAxisY), 140},
    {sipName_eAxisZ, static_cast<int>( ::FbxEuler::eAxisZ), 140},
    {sipName_eOrderXYZ, static_cast<int>( ::FbxEuler::eOrderXYZ), 141},
    {sipName_eOrderXZY, static_cast<int>( ::FbxEuler::eOrderXZY), 141},
    {sipName_eOrderYXZ, static_cast<int>( ::FbxEuler::eOrderYXZ), 141},
    {sipName_eOrderYZX, static_cast<int>( ::FbxEuler::eOrderYZX), 141},
    {sipName_eOrderZXY, static_cast<int>( ::FbxEuler::eOrderZXY), 141},
    {sipName_eOrderZYX, static_cast<int>( ::FbxEuler::eOrderZYX), 141},
};

PyDoc_STRVAR(doc_FbxEuler, "\1FbxEuler()\n"
    "FbxEuler(FbxEuler)");


sipClassTypeDef sipTypeDef_fbx_FbxEuler = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxEuler,
        {0},
        0
    },
    {
        sipNameNr_FbxEuler,
        {0, 0, 1},
        0, 0,
        9, enummembers_FbxEuler,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxEuler,
    -1,
    -1,
    0,
    0,
    init_type_FbxEuler,
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
    dealloc_FbxEuler,
    assign_FbxEuler,
    array_FbxEuler,
    copy_FbxEuler,
    release_FbxEuler,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
