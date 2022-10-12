---
Name: 'PiratePie'  
Github: 'https://github.com/Piratepie'  
WebSite: 'https://github.com/Piratepie'  
Problem: 'When removing access to a folder, the files inside are still accessible'  
Description: 'When removing access to a folder the user that had access to the folder can still access the files inside the folder, which is a security risk.'  
Language: 'Apps Script' 
---

```Apps Script
function removeAccess(folderId, editorEmail) {
  const currFolder = DriveApp.getFolderById(folderId);
  const allFolders = currFolder.getFolders();
  const allFiles = currFolder.getFiles();

  if (allFolders.hasNext()) {
    while (allFolders.hasNext()) {
      const nextFolder = allFolders.next();
      removeAccess(nextFolder.getId());
    }
  }

  if (allFiles.hasNext()) {
    while (allFiles.hasNext()) {
      const nextFile = allFiles.next();
      nextFile.removeEditor(editorEmail);
    }
  }

  currFolder.removeEditor(editorEmail);
}
```