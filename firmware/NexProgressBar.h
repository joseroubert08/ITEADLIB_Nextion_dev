/**
* @file NexProgressBar.h
*
* The definition of class NexProgressBar. 
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

#ifndef __NEXPROGRESSBAR_H__
#define __NEXPROGRESSBAR_H__

#include "NexTouch.h"

/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * NexProgressBar component. 
 */
class NexProgressBar: public NexTouch
{
public: /* methods */
    /**
    * @copydoc NexObject::NexObject(NexDisplay& display, NexPage& page, uint8_t cid, const char *name, void *value);
    */
    NexProgressBar(NexDisplay& display, NexPage& page, uint8_t cid, const char *name, void *value = NULL);

    /**
     * @copydoc NexObject::NexObject(uint8_t pid, uint8_t cid, const char *name, void *value);
     */
    NexProgressBar(uint8_t pid, uint8_t cid, const char *name, void *value = NULL);
    
    /**
     * Get the value of progress bar. 
     * 
     * @param number - an output parameter to save the value of porgress bar.  
     * 
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool getValue(uint32_t *number);
    
    /**
     * Set the value of progress bar.
     *
     * @param number - the value of progress bar.  
     *
     * @retval true - success. 
     * @retval false - failed. 
     */
    bool setValue(uint32_t number);

    bool setBackColor(uint32_t color);
    bool getBackColor(uint32_t* color);

    bool setForeColor(uint32_t color);
    bool getForeColor(uint32_t* color);

    bool setActivedPicture(uint32_t picID);
    bool getActivedPicture(uint32_t* picID);

    bool setBackPicture(uint32_t picID);
    bool getBackPicture(uint32_t* picID);

};

/**
 * @}
 */

#endif /* #ifndef __NEXPROGRESSBAR_H__ */
