/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABAccountsAndGroupDataSource;

@interface ABGroupsController : ABContentController <UITableViewDelegate> {
    ABAccountsAndGroupDataSource *_dataSource;
}

- (id)contentView;
- (void)dealloc;
- (void)deselectAllRowsWithAnimation:(BOOL)arg1;
- (void)displayedGroupsListChanged;
- (void)refreshListIfNeeded;
- (void)reload;
- (BOOL)shouldShowGroups;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(NSInteger)arg2;

@end