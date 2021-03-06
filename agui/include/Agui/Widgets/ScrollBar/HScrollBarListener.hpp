/*   _____                           
 * /\  _  \                     __    
 * \ \ \_\ \      __    __  __ /\_\   
 *  \ \  __ \   /'_ `\ /\ \/\ \\/\ \  
 *   \ \ \/\ \ /\ \_\ \\ \ \_\ \\ \ \ 
 *    \ \_\ \_\\ \____ \\ \____/ \ \_\
 *     \/_/\/_/ \/____\ \\/___/   \/_/
 *                /\____/             
 *                \_/__/              
 *
 * Copyright (c) 2011 Joshua Larouche
 * 
 *
 * License: (BSD)
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of Agui nor the names of its contributors may
 *    be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef AGUI_HSCROLLBAR_LISTENER_HPP
#define AGUI_HSCROLLBAR_LISTENER_HPP
#include "Agui/Platform.hpp"
namespace agui {
	class AGUI_CORE_DECLSPEC HScrollBar;
	/**
     * Abstract class for Horizontal Scrollbar Listeners.
	 *
	 * Any derived Horizontal Scrollbar Listeners should inherit from this class.
	 *
	 * Must implement:
	 *
	 * valueChanged
     * @author Joshua Larouche
     * @since 0.1.0
     */
	class AGUI_CORE_DECLSPEC HScrollBarListener
	{
	public:
		HScrollBarListener(void);
		virtual void valueChanged(HScrollBar* source, int val) = 0;
		virtual void minValueChanged(HScrollBar*, int) {}
		virtual void maxValueChanged(HScrollBar*, int) {}
		virtual void arrowWidthChanged(HScrollBar*, int) {}
		virtual void largeAmountChanged(HScrollBar*, int) {}
		virtual void leftAmountChanged(HScrollBar*, int) {}
		virtual void rightAmountChanged(HScrollBar*, int) {}
		virtual void minThumbWidthChanged(HScrollBar*, int) {}
		virtual void death(HScrollBar*) {}

		virtual ~HScrollBarListener(void);
	};
}
#endif
