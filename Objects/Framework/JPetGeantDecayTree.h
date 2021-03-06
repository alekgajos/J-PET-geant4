/**
 *  @copyright Copyright 2019 The J-PET Monte Carlo Authors. All rights reserved.
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may find a copy of the License in the LICENCE file.
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  @file JPetGeantDecayTree.h
 */

#ifndef JPETGEANTDECAYTREE_H
#define JPETGEANTDECAYTREE_H 1

#include <TVector3.h>
#include <TObject.h>
#include <vector>

/**
 * @class JPetGeantDecayTree
 * @brief Class stores decay tree structures (in form of vertices and tracks)
 * Class is not yet implemented
 */
class JPetGeantDecayTree : public TObject
{

public:
  JPetGeantDecayTree();
  ~JPetGeantDecayTree();

private:
  ClassDef(JPetGeantDecayTree, 1)
};

#endif
