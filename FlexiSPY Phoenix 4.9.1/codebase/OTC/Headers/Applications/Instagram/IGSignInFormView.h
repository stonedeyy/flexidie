/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import <XXUnknownSuperclass.h> // Unknown library
//#import "Instagram-Structs.h"
//#import "UITextFieldDelegate.h"
//#import "IGCoreTextLinkHandler.h"
//#import "UITableViewDataSource.h"
//#import "UITableViewDelegate.h"

@class IGUser, IGGroupedTableView, IGTextField;
@protocol IGSignInFormViewDelegate;

@interface IGSignInFormView : NSObject { // XXUnknownSuperclass <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, IGCoreTextLinkHandler> {
	IGGroupedTableView* _tableView;
	IGTextField* _usernameField;
	IGTextField* _passwordField;
	int _currentField;
	BOOL _submitting;
	BOOL _fromReg;
	IGUser* _user;
	id<IGSignInFormViewDelegate> _delegate;
}
@property(assign, nonatomic)  id<IGSignInFormViewDelegate> delegate;
@property(retain, nonatomic) IGUser* user;
//-(void).cxx_destruct;
-(void)coreTextView:(id)view didTapOnString:(id)string URL:(id)url;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)selectFieldAtRow:(int)row;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)configureFieldCell:(id)cell forRow:(int)row;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)validateAndSubmitFromReg:(BOOL)reg;
-(void)validateAndSubmit;
-(void)showMissingError:(id)error;
-(BOOL)clockIsIncorrect;
-(void)doFormSubmit;
-(void)setPassword:(id)password;
-(void)setUsername:(id)username;
-(void)clearFields;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)init;
@end

