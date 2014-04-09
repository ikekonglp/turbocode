// Copyright (c) 2012-2013 Andre Martins
// All Rights Reserved.
//
// This file is part of TurboParser 2.1.
//
// TurboParser 2.1 is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// TurboParser 2.1 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with TurboParser 2.1.  If not, see <http://www.gnu.org/licenses/>.

#include "DependencyInstance.h"

void DependencyInstance::Initialize(const vector<string> &forms,
									const vector<string> &brownall,
                                    const vector<string> &lemmas,
                                    const vector<string> &cpos,
                                    const vector<string> &brown4,
                                    const vector<string> &brown6,
                                    const vector<string> &pos,
                                    const vector<vector<string> > &feats,
                                    const vector<string> &deprels, 
                                    const vector<int> &heads,
                                    const vector<int> &selects) {
  forms_ = forms;
  brownall_ = brownall;
  lemmas_ = lemmas;
  cpostags_ = cpos;
  brown4_ = brown4;
  brown6_ = brown6;
  postags_ = pos;
  feats_ = feats;
  deprels_ = deprels;
  heads_ = heads;
  selects_ = selects;
}

