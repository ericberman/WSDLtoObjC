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

@class USOperationInterface;
@class USPortType;
@class USOperationFault;

@interface USOperation : NSObject {
	NSString *name;
	NSString *soapAction;
	USOperationInterface *input;
	USOperationInterface *output;
	NSMutableArray *faults;
	
	USPortType *__strong portType;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *soapAction;
@property (nonatomic, strong) USOperationInterface *input;
@property (nonatomic, strong) USOperationInterface *output;
@property (nonatomic, strong) NSMutableArray *faults;
@property (nonatomic, strong) USPortType *portType;
@property (weak, nonatomic, readonly) NSString* className;

- (USOperationFault *)faultForName:(NSString *)aName;

- (NSString *)invokeString;
- (NSString *)asyncInvokeString;
- (NSString *)hasFaults;
@end
