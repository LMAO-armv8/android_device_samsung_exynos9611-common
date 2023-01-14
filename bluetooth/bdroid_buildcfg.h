/*
 * Copyright (C) 2020 LineageOS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#include <cutils/properties.h>
#include <string.h>

#pragma push_macro("PROPERTY_VALUE_MAX")

static inline const char* BtmGetDefaultName()
{
    char product_device[PROPERTY_VALUE_MAX];
    property_get("ro.product.device", product_device, "");

    if (strstr(product_device, "m31"))
        #define BTM_DEF_LOCAL_NAME "Galaxy M31"
    else if (strstr(product_device, "a51"))
        #define BTM_DEF_LOCAL_NAME "Galaxy A51"
    else if (strstr(product_device, "m21"))
        #define BTM_DEF_LOCAL_NAME "Galaxy M21"
    else if (strstr(product_device, "f41"))
        #define BTM_DEF_LOCAL_NAME "Galaxy F41"
    else if (strstr(product_device, "m31s"))
        #define BTM_DEF_LOCAL_NAME "Galaxy M31s"
    // Fallback to Default
    else
        #define BTM_DEF_LOCAL_NAME "Samsung Galaxy"
}

/*
 * Toggles support for vendor specific extensions such as RPA offloading,
 * feature discovery, multi-adv etc.
 */
#define BLE_VND_INCLUDED TRUE

/* 'strings libbluetooth.so' */
#define BTA_AV_SINK_INCLUDED TRUE

#define BTM_ESCO_TRANSPORT_UNIT_SIZE_PCM16

#pragma pop_macro("PROPERTY_VALUE_MAX")

#endif /* _BDROID_BUILDCFG_H */
