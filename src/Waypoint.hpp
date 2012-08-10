/*
Open War: an open-source Total War clone, written in C++ using Ogre3D.
Copyright (C) 2012 William James Dyce

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef WAYPOINT_HPP_INCLUDED
#define WAYPOINT_HPP_INCLUDED

#include <OgreSceneManager.h>
#include <OgreEntity.h>

class Waypoint
{
  /* CONSTANTS */
public:
  static Waypoint one, two, three;
  static void attach_all(Ogre::SceneManager* scene_manager);

  /* ATTRIBUTES */
private:
  // scene graph identifiers
  Ogre::Entity *entity;
  Ogre::SceneNode *node;

  /* METHODS */
public:
  // creation, destruction
  Waypoint();
  void attach(Ogre::SceneManager* scene_manager, const char* name,
              Ogre::Vector3 position);
  // query
  Ogre::Vector3 const& getPosition() const;
};

#endif // WAYPOINT_HPP_INCLUDED
