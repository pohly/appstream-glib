/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*-
 *
 * Copyright (C) 2014 Richard Hughes <richard@hughsie.com>
 *
 * Licensed under the GNU Lesser General Public License Version 2.1
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef ASB_TASK_H
#define ASB_TASK_H

#include <glib-object.h>

#include "asb-package.h"
#include "asb-context.h"

G_BEGIN_DECLS

#define ASB_TYPE_TASK (asb_task_get_type ())
G_DECLARE_DERIVABLE_TYPE (AsbTask, asb_task, ASB, TASK, GObject)

struct _AsbTaskClass
{
	GObjectClass		 parent_class;
	/*< private >*/
	void (*_asb_reserved1)	(void);
	void (*_asb_reserved2)	(void);
	void (*_asb_reserved3)	(void);
	void (*_asb_reserved4)	(void);
	void (*_asb_reserved5)	(void);
	void (*_asb_reserved6)	(void);
	void (*_asb_reserved7)	(void);
	void (*_asb_reserved8)	(void);
};

AsbTask		*asb_task_new			(AsbContext	*ctx);
gboolean	 asb_task_process		(AsbTask	*task,
						 GError		**error);
void		 asb_task_set_package		(AsbTask	*task,
						 AsbPackage	*pkg);

G_END_DECLS

#endif /* ASB_TASK_H */
