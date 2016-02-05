/**
* @file NexVar.h
*
* The definition of class NexVar. 
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
* by ScruffR (Dec. 2015)
*/
 
#ifndef __NEXVAL_H__
#define __NEXVAL_H__

#include "NexTouch.h"

/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexVar component.
 */
class NexVar: public NexTouch
{
public: /* methods */
    /**
    * @copydoc NexObject::NexObject(NexDisplay& display, NexPage& page, uint8_t cid, const char *name, void *value);
    */
    NexVar(NexDisplay& display, NexPage& page, uint8_t cid, const char *name, void *value = NULL);

    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name, void *value);
     */
    NexVar(uint8_t pid, uint8_t cid, const char *name, void *value = NULL);

    /**
     * Get text attribute of component.
     *
     * @param buffer - buffer storing text returned. 
     * @param len - length of buffer. 
     * @return The real length of text returned. 
     */
    uint16_t getText(char *buffer, uint16_t len);

    /**
     * Set text attribute of component.
     *
     * @param buffer - text buffer terminated with '\0'. 
     * @return true if success, false for failure. 
     */
    bool setText(const char *buffer);

    /**
     * Get the value of slider. 
     * 
     * @param number - an output parameter to save the value of slider.  
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool getValue(uint32_t *number);

    /**
     * Set the value of slider.
     *
     * @param number - the value of slider.  
     *
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool setValue(uint32_t number);
};

/**
 * @}
 */

#endif /* #ifndef __NEXTEXT_H__ */