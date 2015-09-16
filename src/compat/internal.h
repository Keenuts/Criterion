/*
 * The MIT License (MIT)
 *
 * Copyright © 2015 Franklin "Snaipe" Mathieu <http://snai.pe/>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#ifndef INTERNAL_H_
# define INTERNAL_H_

# include "posix.h"

# ifdef VANILLA_WIN32
#  define VC_EXTRALEAN
#  define WIN32_LEAN_AND_MEAN
#  undef _WIN32_WINNT
#  define _WIN32_WINNT 0x0502
#  include <windows.h>
#  include <io.h>
#  include <fcntl.h>
#  include <winnt.h>
#  include <stdint.h>
#  include <signal.h>
# else
#  include <unistd.h>
#  include <sys/wait.h>
#  include <sys/signal.h>
#  include <sys/fcntl.h>
# endif

#endif /* !INTERNAL_H_ */
