/*
  Copyright 1999-2009 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.

  You may not use this file except in compliance with the License.
  obtain a copy of the License at

    http://www.wizards-toolkit.org/script/license.php

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  Wizard's Toolkit resource methods.
*/
#ifndef _WIZARDSTOOLKIT_RESOURCE_H
#define _WIZARDSTOOLKIT_RESOURCE_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

/*
  Typedef declarations.
*/
typedef enum
{
  UndefinedResource,
  AreaResource,
  DiskResource,
  FileResource,
  MapResource,
  MemoryResource
} ResourceType;

/*
  Method declarations.
*/
extern WizardExport int
  AcquireUniqueFileResource(const char *,char *,ExceptionInfo *);

extern WizardExport WizardBooleanType
  AcquireWizardResource(const ResourceType,const WizardSizeType),
  AcquireUniqueFilename(char *,ExceptionInfo *),
  InstantiateResourceComponent(void),
  ListWizardResourceInfo(FILE *,ExceptionInfo *),
  RelinquishUniqueFileResource(const char *,const WizardBooleanType),
  SetWizardResourceLimit(const ResourceType,const WizardSizeType);

extern WizardExport WizardSizeType
  GetWizardResource(const ResourceType);

extern WizardExport void
  AsynchronousDestroyResourceComponent(void),
  DestroyResourceComponent(void),
  RelinquishWizardResource(const ResourceType,const WizardSizeType);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
