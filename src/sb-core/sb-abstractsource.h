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
#ifndef SB_ABSTRACTSOURCE_H
#define SB_ABSTRACTSOURCE_H

#include "sb-abstractblok.h"

namespace sb
{

class SB_CORE_API AbstractSource : public AbstractBlok
{

    SB_DECLARE_OBJECT(AbstractSource, "sb::AbstractSource")

public:

    class Private;

    virtual
    ~AbstractSource
    (
    );

    SharedDataSet
    get_output
    (
        size_t _index
    )
    const;

protected:

    void
    set_output_count
    (
        size_t _value
    );

    void
    set_output_count
    (
        size_t _minimum,
        size_t _maximum
    );

    void
    set_output_format
    (
        size_t _index,
        const ObjectInformation& _format
    );

    void
    set_index_range
    (
        size_t _output,
        const IndexRange& _value
    );

    void
    set_defined_indices
    (
        size_t _output,
        const IndexCollection& _value
    );

private:

    SB_DECL_HIDDEN
    static
    void
    construct
    (
        AbstractSource* _this
    );

    Private*
    d_ptr;

};

}

#endif // SB_ABSTRACTSOURCE_H
