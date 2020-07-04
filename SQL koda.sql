/*
Created: 28.3.2016
Modified: 28.3.2016
Model: MySQL 5.0
Database: MySQL 5.0
*/


-- Create tables section -------------------------------------------------

-- Table Knjiga

CREATE TABLE `Knjiga`
(
  `IDKnjiga` Int NOT NULL,
  `Naslov knjige` Char(30) NOT NULL,
  `Leto izdaje` Year(4) NOT NULL,
  `IDAvtor` Int NOT NULL,
  `IDZalozba` Int NOT NULL,
  `Status` Char(20)
)
;

CREATE INDEX `IX_Relationship4` ON `Knjiga` (`IDAvtor`)
;

CREATE INDEX `IX_Relationship5` ON `Knjiga` (`IDZalozba`)
;

ALTER TABLE `Knjiga` ADD  PRIMARY KEY (`IDKnjiga`)
;

ALTER TABLE `Knjiga` ADD UNIQUE `IDKnjiga` (`IDKnjiga`)
;

-- Table Clan

CREATE TABLE `Clan`
(
  `IDClan` Int NOT NULL,
  `Ime` Char(20) NOT NULL,
  `Priimek` Char(20) NOT NULL,
  `Datum_rojstva` Date NOT NULL
)
;

ALTER TABLE `Clan` ADD  PRIMARY KEY (`IDClan`)
;

ALTER TABLE `Clan` ADD UNIQUE `IDClan` (`IDClan`)
;

-- Table Knjiznicar

CREATE TABLE `Knjiznicar`
(
  `IDKnjiznicar` Int NOT NULL,
  `Ime` Char(20) NOT NULL,
  `Priimek` Char(20) NOT NULL,
  `Datum_rojstva` Date NOT NULL
)
;

ALTER TABLE `Knjiznicar` ADD  PRIMARY KEY (`IDKnjiznicar`)
;

ALTER TABLE `Knjiznicar` ADD UNIQUE `IDKnjiznicar` (`IDKnjiznicar`)
;

-- Table Avtor

CREATE TABLE `Avtor`
(
  `IDAvtor` Int NOT NULL,
  `Ime` Char(20) NOT NULL,
  `Priimek` Char(20) NOT NULL,
  `Drzava` Char(20),
  `Datum rojstva` Date
)
;

ALTER TABLE `Avtor` ADD  PRIMARY KEY (`IDAvtor`)
;

ALTER TABLE `Avtor` ADD UNIQUE `IDAvtor` (`IDAvtor`)
;

-- Table Zalozba

CREATE TABLE `Zalozba`
(
  `IDZalozba` Int NOT NULL,
  `Naziv` Char(20) NOT NULL,
  `Naslov` Char(20) NOT NULL,
  `Posta` Int NOT NULL,
  `Kraj` Char(20) NOT NULL
)
;

ALTER TABLE `Zalozba` ADD  PRIMARY KEY (`IDZalozba`)
;

ALTER TABLE `Zalozba` ADD UNIQUE `IDZalozba` (`IDZalozba`)
;

-- Table Izposoja

CREATE TABLE `Izposoja`
(
  `IDClan` Int NOT NULL,
  `IDKnjiga` Int NOT NULL,
  `IDKnjiznicar` Int NOT NULL,
  `Datum izposoje` Datetime NOT NULL,
  `Datum vrnitve` Date NOT NULL
)
;

ALTER TABLE `Izposoja` ADD  PRIMARY KEY (`IDClan`,`IDKnjiga`,`IDKnjiznicar`)
;

-- Table Kategorija

CREATE TABLE `Kategorija`
(
  `IDKategorija` Int NOT NULL,
  `Opis` Char(40) NOT NULL
)
;

ALTER TABLE `Kategorija` ADD  PRIMARY KEY (`IDKategorija`)
;

-- Table Je

CREATE TABLE `Je`
(
  `IDKnjiga` Int NOT NULL,
  `IDKategorija` Int NOT NULL
)
;

ALTER TABLE `Je` ADD  PRIMARY KEY (`IDKnjiga`,`IDKategorija`)
;

-- Create relationships section ------------------------------------------------- 

ALTER TABLE `Knjiga` ADD CONSTRAINT `Relationship4` FOREIGN KEY (`IDAvtor`) REFERENCES `Avtor` (`IDAvtor`) ON DELETE RESTRICT ON UPDATE RESTRICT
;

ALTER TABLE `Knjiga` ADD CONSTRAINT `Relationship5` FOREIGN KEY (`IDZalozba`) REFERENCES `Zalozba` (`IDZalozba`) ON DELETE RESTRICT ON UPDATE RESTRICT
;

ALTER TABLE `Izposoja` ADD CONSTRAINT `Relationship6` FOREIGN KEY (`IDClan`) REFERENCES `Clan` (`IDClan`) ON DELETE RESTRICT ON UPDATE RESTRICT
;

ALTER TABLE `Izposoja` ADD CONSTRAINT `Relationship7` FOREIGN KEY (`IDKnjiga`) REFERENCES `Knjiga` (`IDKnjiga`) ON DELETE RESTRICT ON UPDATE RESTRICT
;

ALTER TABLE `Izposoja` ADD CONSTRAINT `Relationship8` FOREIGN KEY (`IDKnjiznicar`) REFERENCES `Knjiznicar` (`IDKnjiznicar`) ON DELETE RESTRICT ON UPDATE RESTRICT
;

ALTER TABLE `Je` ADD CONSTRAINT `Relationship9` FOREIGN KEY (`IDKnjiga`) REFERENCES `Knjiga` (`IDKnjiga`) ON DELETE RESTRICT ON UPDATE RESTRICT
;

ALTER TABLE `Je` ADD CONSTRAINT `Relationship10` FOREIGN KEY (`IDKategorija`) REFERENCES `Kategorija` (`IDKategorija`) ON DELETE RESTRICT ON UPDATE RESTRICT
;
