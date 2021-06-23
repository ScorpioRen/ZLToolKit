﻿/*
 * Copyright (c) 2021 The ZLToolKit project authors. All Rights Reserved.
 *
 * This file is part of ZLToolKit(https://github.com/ZLMediaKit/ZLToolKit).
 *
 * Use of this source code is governed by MIT license that can be found in the
 * LICENSE file in the root of the source tree. All contributing project authors
 * may be found in the AUTHORS file in the root of the source tree.
 */

#include "Network/Server.h"

namespace toolkit {

Server::Server(EventPoller::Ptr poller) {
    _poller = poller ? std::move(poller) : EventPollerPool::Instance().getPoller();
}

Server::~Server() {}

} // namespace toolkit
