//
// Copyright (C) OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see http://www.gnu.org/licenses/.
//

#ifndef __INET_REORDERING_H
#define __INET_REORDERING_H

#include "inet/queueing/base/PacketPusherBase.h"

namespace inet {

using namespace inet::queueing;

class INET_API Reordering : public PacketPusherBase
{
  protected:
    int expectedSequenceNumber;
    std::map<int, Packet *> packets;

  protected:
    virtual void initialize(int stage) override;

  public:
    virtual void pushPacket(Packet *packet, cGate *gate) override;
};

} // namespace inet

#endif

