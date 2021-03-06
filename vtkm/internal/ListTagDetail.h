//============================================================================
//  Copyright (c) Kitware, Inc.
//  All rights reserved.
//  See LICENSE.txt for details.
//  This software is distributed WITHOUT ANY WARRANTY; without even
//  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
//  PURPOSE.  See the above copyright notice for more information.
//
//  Copyright 2014 Sandia Corporation.
//  Copyright 2014 UT-Battelle, LLC.
//  Copyright 2014. Los Alamos National Security
//
//  Under the terms of Contract DE-AC04-94AL85000 with Sandia Corporation,
//  the U.S. Government retains certain rights in this software.
//
//  Under the terms of Contract DE-AC52-06NA25396 with Los Alamos National
//  Laboratory (LANL), the U.S. Government retains certain rights in
//  this software.
//============================================================================
// **** DO NOT EDIT THIS FILE!!! ****
// This file is automatically generated by FunctionInterfaceDetailPre.h.in

#ifndef vtk_m_internal_ListTagDetail_h
#define vtk_m_internal_ListTagDetail_h

#if !defined(vtk_m_ListTag_h) && !defined(VTKM_TEST_HEADER_BUILD)
#error ListTagDetail.h must be included from ListTag.h
#endif

#include <vtkm/Types.h>

#define VTKM_MAX_BASE_LIST 15


namespace vtkm {

namespace detail {

//-----------------------------------------------------------------------------

/// Base class that all ListTag classes inherit from. Helps identify lists
/// in macros like VTKM_IS_LIST_TAG.
///
struct ListRoot {  };

template<typename signature>
struct ListBase {  };

struct ListParamNull {  };

//-----------------------------------------------------------------------------

template<typename Functor>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &, ListBase<void()>) {  }

template<typename Functor,
         typename T1>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1)>)
{
  f(T1());
}

template<typename Functor,
         typename T1>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1)>)
{
  f(T1());
}

template<typename Functor,
         typename T1,
         typename T2>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2)>)
{
  f(T1());
  f(T2());
}

template<typename Functor,
         typename T1,
         typename T2>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2)>)
{
  f(T1());
  f(T2());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3)>)
{
  f(T1());
  f(T2());
  f(T3());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3)>)
{
  f(T1());
  f(T2());
  f(T3());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
  f(T13());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
  f(T13());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
  f(T13());
  f(T14());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
  f(T13());
  f(T14());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14,
         typename T15>
VTKM_CONT_EXPORT
void ListForEachImpl(Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
  f(T13());
  f(T14());
  f(T15());
}

template<typename Functor,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14,
         typename T15>
VTKM_CONT_EXPORT
void ListForEachImpl(const Functor &f, ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)>)
{
  f(T1());
  f(T2());
  f(T3());
  f(T4());
  f(T5());
  f(T6());
  f(T7());
  f(T8());
  f(T9());
  f(T10());
  f(T11());
  f(T12());
  f(T13());
  f(T14());
  f(T15());
}


//-----------------------------------------------------------------------------

template<typename List, typename Type>
struct ListContainsImpl;

template<typename Type>
struct ListContainsImpl<ListBase<void()>, Type>
{
  static const bool value = false;
};

template<typename Type>
struct ListContainsImpl<ListBase<void(Type)>, Type>
{
  static const bool value = true;
};

template<typename Type, typename T1>
struct ListContainsImpl<ListBase<void(T1)>, Type>
{
  static const bool value = false;
};

template<typename Type,
         typename T2>
struct ListContainsImpl<ListBase<void(Type,T2)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2>
struct ListContainsImpl<ListBase<void(T1,T2)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3>
struct ListContainsImpl<ListBase<void(Type,T2,T3)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3>
struct ListContainsImpl<ListBase<void(T1,T2,T3)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9,T10)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9,T10)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)>, Type>::value;
};

template<typename Type,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14,
         typename T15>
struct ListContainsImpl<ListBase<void(Type,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)>, Type>
{
  static const bool value = true;
};

template<typename Type,
         typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14,
         typename T15>
struct ListContainsImpl<ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)>, Type>
{
  static const bool value =
      ListContainsImpl<ListBase<void(T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)>, Type>::value;
};


} // namespace detail

//-----------------------------------------------------------------------------

/// A basic tag for a list of typenames. This struct can be subclassed
/// and still behave like a list tag.
template<typename T1 = vtkm::detail::ListParamNull,
         typename T2 = vtkm::detail::ListParamNull,
         typename T3 = vtkm::detail::ListParamNull,
         typename T4 = vtkm::detail::ListParamNull,
         typename T5 = vtkm::detail::ListParamNull,
         typename T6 = vtkm::detail::ListParamNull,
         typename T7 = vtkm::detail::ListParamNull,
         typename T8 = vtkm::detail::ListParamNull,
         typename T9 = vtkm::detail::ListParamNull,
         typename T10 = vtkm::detail::ListParamNull,
         typename T11 = vtkm::detail::ListParamNull,
         typename T12 = vtkm::detail::ListParamNull,
         typename T13 = vtkm::detail::ListParamNull,
         typename T14 = vtkm::detail::ListParamNull,
         typename T15 = vtkm::detail::ListParamNull>
struct ListTagBase : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)> List;
};

template<>
struct ListTagBase<> : detail::ListRoot
{
  typedef detail::ListBase<void()> List;
};

template<typename T1>
struct ListTagBase<T1> : detail::ListRoot
{
  typedef detail::ListBase<void(T1)> List;
};

template<typename T1,
         typename T2>
struct ListTagBase<T1,T2> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2)> List;
};

template<typename T1,
         typename T2,
         typename T3>
struct ListTagBase<T1,T2,T3> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4>
struct ListTagBase<T1,T2,T3,T4> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5>
struct ListTagBase<T1,T2,T3,T4,T5> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6>
struct ListTagBase<T1,T2,T3,T4,T5,T6> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8,T9> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)> List;
};

template<typename T1,
         typename T2,
         typename T3,
         typename T4,
         typename T5,
         typename T6,
         typename T7,
         typename T8,
         typename T9,
         typename T10,
         typename T11,
         typename T12,
         typename T13,
         typename T14>
struct ListTagBase<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14> : detail::ListRoot
{
  typedef detail::ListBase<void(T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)> List;
};


} // namespace vtkm

#endif //vtk_m_internal_ListTagDetail_h
