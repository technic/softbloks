/*
Copyright (C) 2014 Bastien Oudot

This file is part of Softbloks.
Softbloks is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Softbloks is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with Softbloks.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef SB_ABSTRACTBLOK_H
#define SB_ABSTRACTBLOK_H

#include "sb-abstractobject.h"

#include "sb-abstractdata.h"

namespace sb
{

class SB_CORE_API AbstractBlok : public AbstractObject
{

public:

    class Private;

    virtual
    ~AbstractBlok
    (
    );

    size_t
    get_minimum_input_count
    (
    )
    const;

    size_t
    get_maximum_input_count
    (
    )
    const;

    size_t
    get_input_count
    (
    )
    const;

    size_t
    get_minimum_output_count
    (
    )
    const;

    size_t
    get_maximum_output_count
    (
    )
    const;

    size_t
    get_output_count
    (
    )
    const;

protected:

    AbstractBlok
    (
    );

private:

    Private*
    d_ptr;

};

}

#endif // SB_ABSTRACTBLOK_H
