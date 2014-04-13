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

#ifndef DEPENDENCYREADER_H_
#define DEPENDENCYREADER_H_

#include "DependencyInstance.h"
#include "Reader.h"
#include <fstream>

using namespace std;

class DependencyReader : public Reader {
public:
  DependencyReader() {};
  DependencyReader(DependencyPipe *pipe) : pipe_(pipe) {};
  virtual ~DependencyReader() {};

public:
  DependencyInstance *GetNext();

protected:
  DependencyPipe *pipe_;
};

#endif /* DEPENDENCYREADER_H_ */

