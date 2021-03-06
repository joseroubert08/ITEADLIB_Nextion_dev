/**
* @file NexCrop.h
*
* The definition of class NexCrop. 
*
* @author Wu Pengfei (email:<pengfei.wu@itead.cc>)
* @date 2015/8/13
*
* @copyright 
* Copyright (C) 2014-2015 ITEAD Intelligent Systems Co., Ltd. \n
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; either version 2 of
* the License, or (at your option) any later version.
*
* Port for Particle platform (particle.io)
* by BSpranger & ScruffR (Dec. 2015)
*/

#ifndef __NEXCROP_H__
#define __NEXCROP_H__

#include "NexTouch.h"

/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexCrop component. 
 */
class NexCrop: public NexTouch
{
public: /* methods */
    /**
    * @copydoc NexObject::NexObject(NexDisplay& display, NexPage& page, uint8_t cid, const char *name, void *value);
    */
    NexCrop(NexDisplay& display, NexPage& page, uint8_t cid, const char *name, void *value = NULL);

    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name, void *value);
     */
    NexCrop(uint8_t pid, uint8_t cid, const char *name, void *value = NULL);

    /**
     * Get the number of picture. 
     *
     * @param number - an output parameter to save the number of picture. 
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool getPic(uint32_t *number);
    
    /**
     * Set the number of picture. 
     *
     * @param number - the number of picture. 
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool setPic(uint32_t number);
};

/**
 * @}
 */

#endif /* #ifndef __NEXCROP_H__ */
