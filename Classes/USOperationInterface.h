/*
 Copyright (c) 2008 LightSPEED Technologies, Inc.
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */

#import <Foundation/Foundation.h>

@class USMessage;
@class USOperation;

@interface USOperationInterface : NSObject {
	NSString *name;
	NSMutableArray *headers; //Array of USElements
	USMessage *body;
	
	USOperation *__strong operation;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *headers;
@property (nonatomic, strong) USMessage *body;
@property (nonatomic, strong) USOperation *operation;
@property (weak, nonatomic, readonly) NSString *className;

+ (USOperationInterface *)operationInterfaceForOperation:(USOperation *)operation;

- (NSString *)className;
- (NSString *)hasHeaders;

@end
