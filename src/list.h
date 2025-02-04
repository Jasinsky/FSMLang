/*
  list.h

   public interface for the list module.  The list module provided general purpose list management.
 
    FSMLang (fsm) - A Finite State Machine description language.
    Copyright (C) 2002  Steven Stanton
    Copyright (C) 7/5/2022  Steven Stanton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

    Steven Stanton
    sstantin@pesticidesoftware.com

    For the latest on FSMLang: http://fsmlang.pesticidesoftware.com

    And, finally, your possession of this source code implies nothing.

*/

#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

typedef struct _list_		         LIST, *pLIST;
typedef struct _list_element_	   LIST_ELEMENT, *pLIST_ELEMENT;

typedef bool (*LIST_ITERATOR_FN)(pLIST_ELEMENT,void*);

struct _list_ {
   unsigned      count;
   pLIST_ELEMENT head;
   pLIST_ELEMENT tail;
};

struct _list_element_ {
  void  		    *mbr;
  pLIST_ELEMENT next;
};

/**********************************************************************************************************************/
/**
 * @brief allocate and initialize a LIST
 * 
 * @author Steven Stanton (6/26/2022)
 * 
 * @param void 
 * 
 *
 * @ref_global none
 *
 * @mod_global none
 *
 * @thread_safe yes
 * 
 * @return pLIST pointer to LIST structure.
 *
 ***********************************************************************************************************************/
pLIST init_list(void);

pLIST_ELEMENT iterate_list(pLIST, LIST_ITERATOR_FN, void *);

void free_list(pLIST);
pLIST copy_list(pLIST, pLIST);

pLIST move_list(pLIST, pLIST);
pLIST move_list_unique(pLIST, pLIST);

pLIST_ELEMENT add_to_list(pLIST,void*);
pLIST_ELEMENT add_unique_to_list(pLIST,void*);
void *find_nth_list_member(pLIST, unsigned);

#endif


