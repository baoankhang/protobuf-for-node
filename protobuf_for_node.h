// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#include <v8.h>

namespace google {
  namespace protobuf {
    class Service;
  }
}

namespace protobuf_for_node {
  // Exports a JS object under "name" in "target" which forwards method calls to
  // the given service implementation. Currently, the rpc controller
  // will be passed as NULL. Your service is free to finish and call the "done"
  // closure asynchronously.
  // This method takes ownership of the service argument and deletes it when the JS
  // service proxy becomes unreachable.
  void ExportService(v8::Handle<v8::Object> target, const char* name, google::protobuf::Service* service);
}
