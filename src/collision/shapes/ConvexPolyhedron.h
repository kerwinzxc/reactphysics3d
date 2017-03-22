/********************************************************************************
* ReactPhysics3D physics library, http://www.reactphysics3d.com                 *
* Copyright (c) 2010-2016 Daniel Chappuis                                       *
*********************************************************************************
*                                                                               *
* This software is provided 'as-is', without any express or implied warranty.   *
* In no event will the authors be held liable for any damages arising from the  *
* use of this software.                                                         *
*                                                                               *
* Permission is granted to anyone to use this software for any purpose,         *
* including commercial applications, and to alter it and redistribute it        *
* freely, subject to the following restrictions:                                *
*                                                                               *
* 1. The origin of this software must not be misrepresented; you must not claim *
*    that you wrote the original software. If you use this software in a        *
*    product, an acknowledgment in the product documentation would be           *
*    appreciated but is not required.                                           *
*                                                                               *
* 2. Altered source versions must be plainly marked as such, and must not be    *
*    misrepresented as being the original software.                             *
*                                                                               *
* 3. This notice may not be removed or altered from any source distribution.    *
*                                                                               *
********************************************************************************/

#ifndef REACTPHYSICS3D_CONVEX_POLYHEDRON_H
#define REACTPHYSICS3D_CONVEX_POLYHEDRON_H

// Libraries
#include "ConvexShape.h"

/// ReactPhysics3D namespace
namespace reactphysics3d {

// Class ConvexPolyhedron
/**
 * This abstract class represents a convex polyhedron collision shape associated with a
 * body that is used during the narrow-phase collision detection.
 */
class ConvexPolyhedron : public ConvexShape {

    protected :

        // -------------------- Attributes -------------------- //

        // -------------------- Methods -------------------- //

    public :

        // -------------------- Methods -------------------- //

        /// Constructor
        ConvexPolyhedron(decimal margin);

        /// Destructor
        virtual ~ConvexPolyhedron() override = default;

        /// Deleted copy-constructor
        ConvexPolyhedron(const ConvexPolyhedron& shape) = delete;

        /// Deleted assignment operator
        ConvexPolyhedron& operator=(const ConvexPolyhedron& shape) = delete;
};

}

#endif
