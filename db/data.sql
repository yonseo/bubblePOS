--
-- File generated with SQLiteStudio v3.2.1 on Wed Mar 4 17:50:57 2020
--
-- Text encoding used: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Table: users
CREATE TABLE users (userID INTEGER PRIMARY KEY AUTOINCREMENT, userName TEXT (100), userPassword TEXT (50), userEmail TEXT (100));
INSERT INTO users (userID, userName, userPassword, userEmail) VALUES (1, 'Crackle', '1234', 'jojo@email.com');
INSERT INTO users (userID, userName, userPassword, userEmail) VALUES (2, 'Snap', '1234', 'snap@email.com');
INSERT INTO users (userID, userName, userPassword, userEmail) VALUES (3, 'Pop', '1234', 'pop@email.com');

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
