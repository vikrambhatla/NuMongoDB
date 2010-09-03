/*!
@header NuBSON.h
@discussion Declarations for the NuBSON component.
@copyright Copyright (c) 2010 Neon Design Technology, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bson.h"

#import <Foundation/Foundation.h>

/*!
   @class NuBSON
   @abstract A BSON serializer and deserializer.
   @discussion BSON is the wire format used to communicate with MongoDB.
 */
@interface NuBSON : NSObject
{
    @public
    bson bsonValue;
}

/*! Create a BSON representation of a dictionary object. */
- (NuBSON *) initWithDictionary:(NSDictionary *) dict;
/*! Return a dictionary equivalent of a BSON object. */
- (NSMutableDictionary *) dictionaryValue;
@end

@interface NuBSONObjectID : NSObject
{
    @public
    bson_oid_t oid;
}

@end

bson *bson_for_object(id object);

